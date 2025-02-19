// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPSurvivalGameMode.h"
#include "TPSurvivalCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPSurvivalGameMode::ATPSurvivalGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Player/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
