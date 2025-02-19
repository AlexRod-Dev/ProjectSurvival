// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPSurvivalCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "CableComponent.h"
#include "Kismet/KismetMathLibrary.h"



DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ATPSurvivalCharacter

ATPSurvivalCharacter::ATPSurvivalCharacter()
{
	bIsAiming = false;
	bIsSprinting = false;
	bIsTPP = true;

	movementSpeed = 500.0f;
	sneakMovementSpeed = 150.0f;
	sprintMovementSpeed = 750.0f;

	maxHealth = 100.0f;
	currentHealth = maxHealth;

	maxFood = 100.0f;
	currentFood = maxFood;

	maxWater = 10.0f;//change to 100 after testing
	currentWater = maxWater;

	maxGrapplingDistance = 1000.0f;
	


	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;


	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;


	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a ThirdPersonCamera
	TPPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TPPCamera"));
	TPPCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	TPPCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	//Create FirstPersonCamera
	FPPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPPCamera"));
	FPPCamera->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, "Head");
	FPPCamera->bUsePawnControlRotation = true;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	GrappleCable = CreateDefaultSubobject<UCableComponent>(TEXT("Grappling Line"));
	GrappleCable->SetupAttachment(FPPCamera);
	GrappleCable->SetVisibility(false);
}

void ATPSurvivalCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);


		}
	}

	GetWorld()->GetTimerManager().SetTimer(waterTimerHandle, this, &ATPSurvivalCharacter::WaterDecrement, 1, true);
	GetWorld()->GetTimerManager().SetTimer(foodTimerHandle, this, &ATPSurvivalCharacter::FoodDecrement, 3, true);

}

void ATPSurvivalCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


		ApplyGrapple();
	
}

//////////////////////////////////////////////////////////////////////////
// Input

void ATPSurvivalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {

		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ATPSurvivalCharacter::PullTowardGrapple);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATPSurvivalCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ATPSurvivalCharacter::Look);

		//Aim Down Sight
		EnhancedInputComponent->BindAction(Aim, ETriggerEvent::Triggered, this, &ATPSurvivalCharacter::AimDownSight);
		EnhancedInputComponent->BindAction(Aim, ETriggerEvent::Completed, this, &ATPSurvivalCharacter::StopAimDownSight);

		//Sprint
		EnhancedInputComponent->BindAction(Sprint, ETriggerEvent::Triggered, this, &ATPSurvivalCharacter::StartSprint);
		EnhancedInputComponent->BindAction(Sprint, ETriggerEvent::Completed, this, &ATPSurvivalCharacter::StopSprint);

		//SwitchCamera
		EnhancedInputComponent->BindAction(SwitchPov, ETriggerEvent::Triggered, this, &ATPSurvivalCharacter::SwitchCamera);

		//Interact
		EnhancedInputComponent->BindAction(Interact, ETriggerEvent::Triggered, this, &ATPSurvivalCharacter::Use);

		//Grapple
		EnhancedInputComponent->BindAction(Grapple, ETriggerEvent::Triggered, this, &ATPSurvivalCharacter::FireGrapple);
		//Stop Grapple
		EnhancedInputComponent->BindAction(Grapple, ETriggerEvent::Completed, this, &ATPSurvivalCharacter::StopGrapple);


	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ATPSurvivalCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ATPSurvivalCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ATPSurvivalCharacter::PullTowardGrapple()
{
	if(bIsGrappling)
	{
		FVector Direction = (grabPoint - GetActorLocation()).GetSafeNormal();
		LaunchCharacter(Direction * sprintMovementSpeed, true, true);

	}

}
void ATPSurvivalCharacter::AimDownSight()
{

	if (auto camera = GetCameraBoom()) {

		camera->TargetArmLength = 150.0f;
		camera->SocketOffset = FVector(0.0f, 20.0f, 50.0f);

		
		if (auto characterMovement = GetCharacterMovement()) {

			characterMovement->MaxWalkSpeed = sneakMovementSpeed;

			if (bIsTPP)
			{
				this->bUseControllerRotationYaw = true;
				GetCharacterMovement()->bUseControllerDesiredRotation = true;
				GetCharacterMovement()->bOrientRotationToMovement = false;
			}
		}
	}
	bIsAiming = true;
}

void ATPSurvivalCharacter::StopAimDownSight()
{

	if (auto camera = GetCameraBoom()) {

		camera->TargetArmLength = 400.0f;
		camera->SocketOffset = FVector(0.0f, 0.0f, 0.0f);

		if (auto characterMovement = GetCharacterMovement()) {
			characterMovement->MaxWalkSpeed = movementSpeed;

			if (bIsTPP) {
				this->bUseControllerRotationYaw = false;
				GetCharacterMovement()->bUseControllerDesiredRotation = false;
				GetCharacterMovement()->bOrientRotationToMovement = true;
			}
		}
	}
	bIsAiming = false;
}

void ATPSurvivalCharacter::StartSprint()
{

	if (!bIsAiming)
	{
		if (auto characterMovement = GetCharacterMovement()) {

			characterMovement->MaxWalkSpeed = sprintMovementSpeed;
			//TPPCamera->SetFieldOfView(100.0f);

			// could check if World is valid
			UWorld* World = GetWorld();


			const float CurrentFOV = TPPCamera->FieldOfView;
			const float InterpSpeed = 5.0f;

			TPPCamera->FieldOfView = FMath::FInterpTo(CurrentFOV, 100.0f, World->GetTimeSeconds(), InterpSpeed);

			

		}

	}

}

void ATPSurvivalCharacter::StopSprint()
{
	if (bIsAiming)
		return;

	if (auto characterMovement = GetCharacterMovement()) {

		characterMovement->MaxWalkSpeed = movementSpeed;
		TPPCamera->FieldOfView = 90.0f;
	}

}

void ATPSurvivalCharacter::SwitchCamera() {


	if (bIsTPP) {

		TPPCamera->SetActive(false);
		FPPCamera->SetActive(true);

		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->bOrientRotationToMovement = false;

		bIsTPP = false;



	}
	else {

		bIsTPP = true;
		TPPCamera->SetActive(true);
		FPPCamera->SetActive(false);

		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		

		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Third Person"));
	}
}

void ATPSurvivalCharacter::WaterDecrement()
{

	--currentWater;

	if (currentWater <= 0)
	{
		currentWater = 0;
		--currentHealth;
	}

}

void ATPSurvivalCharacter::FoodDecrement()
{
	--currentFood;

	if (currentFood <= 0)
	{
		currentFood = 0;
		--currentHealth;
	}
	
}

void ATPSurvivalCharacter::Use()
{

	FHitResult Hit;

	FVector TraceStart;
	FVector TraceEnd;

	TraceStart = GetMesh()->GetSocketLocation("head");
	TraceEnd = (GetFollowCamera()->GetForwardVector() * 500.0f + TraceStart);

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, TraceChannelProperty, QueryParams);

	DrawDebugLine(GetWorld(), TraceStart, TraceEnd, Hit.bBlockingHit ? FColor::Blue : FColor::Red, false, 5.0f, 0, 3.0f);

	if (Hit.bBlockingHit && IsValid(Hit.GetActor()))
	{
		UE_LOG(LogTemp, Log, TEXT("Trace hit actor: %s"), *Hit.GetActor()->GetName());

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Bateu %s"), *Hit.GetActor()->GetName()));
		
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("No Actors were hit"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Nao Bateu em nada")));

	}
}

void ATPSurvivalCharacter::FireGrapple() 
{
	

	FVector TraceStart = GetMesh()->GetSocketLocation("head");
	FVector TraceEnd = (GetFollowCamera()->GetForwardVector() * maxGrapplingDistance + TraceStart);


	//DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Emerald);

	FHitResult HitResult;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	bool hasHit = GetWorld()->SweepSingleByChannel(HitResult, TraceStart, TraceEnd,FQuat::Identity, ECC_GameTraceChannel2, FCollisionShape::MakeSphere(50.f), QueryParams);

	if(hasHit && !bIsGrappling)
	{
		bIsGrappling = true;

		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);

		GrappleCable->SetVisibility(true);

		grabPoint = HitResult.ImpactPoint;


	}

	
}

void ATPSurvivalCharacter::StopGrapple()
{
	bIsGrappling = false;
	
	if(!GetCharacterMovement()->IsFalling())
	{
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Falling);
	}

	GrappleCable->SetVisibility(false);


}

void ATPSurvivalCharacter::ApplyGrapple(){

	if (!bIsGrappling) { return; }

	FVector GrappleDiff = grabPoint - GetActorLocation();

	if (GrappleDiff.Length() < currentGrapplingDistance) { return; }

	GrappleCable->EndLocation = GetActorTransform().InverseTransformPosition(grabPoint);


	FVector Vel = GetVelocity();
	FVector NormalTowardsGrapplePoint = GrappleDiff.GetSafeNormal();
	FVector VelNormal = Vel.GetSafeNormal();

	float AngleBetweenVelocityAndGrapple = UKismetMathLibrary::DegAcos(VelNormal.Dot(NormalTowardsGrapplePoint));

	if (AngleBetweenVelocityAndGrapple < 90) { return; }

	FVector NewVelocity = UKismetMathLibrary::ProjectVectorOnToPlane(Vel, NormalTowardsGrapplePoint);

	LaunchCharacter(NewVelocity, true, true);

	
	
}
