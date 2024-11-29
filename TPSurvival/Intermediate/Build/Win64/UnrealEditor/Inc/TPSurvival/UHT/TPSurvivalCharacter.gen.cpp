// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSurvival/Public/TPSurvivalCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSurvivalCharacter() {}

// Begin Cross Module References
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TPSURVIVAL_API UClass* Z_Construct_UClass_ATPSurvivalCharacter();
TPSURVIVAL_API UClass* Z_Construct_UClass_ATPSurvivalCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPSurvival();
// End Cross Module References

// Begin Class ATPSurvivalCharacter
void ATPSurvivalCharacter::StaticRegisterNativesATPSurvivalCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSurvivalCharacter);
UClass* Z_Construct_UClass_ATPSurvivalCharacter_NoRegister()
{
	return ATPSurvivalCharacter::StaticClass();
}
struct Z_Construct_UClass_ATPSurvivalCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPSurvivalCharacter.h" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPPCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Third Person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Third Person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPPCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First Person Camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First Person Camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mesh da arma */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh da arma" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrappleCable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Grapple Input Action */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grapple Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Aim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Aim Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aim Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sprint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Aim Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aim Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchPov_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Switch POV Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch POV Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interact_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interact Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interact Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fire_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Grapple Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grapple Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTPP_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sneakMovementSpeed_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sprintMovementSpeed_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentFood_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxFood_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentWater_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxWater_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannelProperty_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/TPSurvivalCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TPPCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPPCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleCable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Aim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchPov;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grapple;
	static void NewProp_bIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static void NewProp_bIsTPP_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTPP;
	static void NewProp_bIsSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_movementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sneakMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sprintMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentFood;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxFood;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentWater;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxWater;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannelProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSurvivalCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_TPPCamera = { "TPPCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, TPPCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPPCamera_MetaData), NewProp_TPPCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_FPPCamera = { "FPPCamera", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, FPPCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPPCamera_MetaData), NewProp_FPPCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, WeaponMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_GrappleCable = { "GrappleCable", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, GrappleCable), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrappleCable_MetaData), NewProp_GrappleCable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_Aim = { "Aim", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, Aim), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Aim_MetaData), NewProp_Aim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_Sprint = { "Sprint", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprint_MetaData), NewProp_Sprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_SwitchPov = { "SwitchPov", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, SwitchPov), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchPov_MetaData), NewProp_SwitchPov_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_Interact = { "Interact", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, Interact), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interact_MetaData), NewProp_Interact_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_Fire = { "Fire", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, Fire), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fire_MetaData), NewProp_Fire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_Grapple = { "Grapple", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, Grapple), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grapple_MetaData), NewProp_Grapple_MetaData) };
void Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsAiming_SetBit(void* Obj)
{
	((ATPSurvivalCharacter*)Obj)->bIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPSurvivalCharacter), &Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAiming_MetaData), NewProp_bIsAiming_MetaData) };
void Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsTPP_SetBit(void* Obj)
{
	((ATPSurvivalCharacter*)Obj)->bIsTPP = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsTPP = { "bIsTPP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPSurvivalCharacter), &Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsTPP_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTPP_MetaData), NewProp_bIsTPP_MetaData) };
void Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
{
	((ATPSurvivalCharacter*)Obj)->bIsSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPSurvivalCharacter), &Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSprinting_MetaData), NewProp_bIsSprinting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_movementSpeed = { "movementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, movementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movementSpeed_MetaData), NewProp_movementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_sneakMovementSpeed = { "sneakMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, sneakMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sneakMovementSpeed_MetaData), NewProp_sneakMovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_sprintMovementSpeed = { "sprintMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, sprintMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sprintMovementSpeed_MetaData), NewProp_sprintMovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, currentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHealth_MetaData), NewProp_currentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_currentFood = { "currentFood", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, currentFood), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentFood_MetaData), NewProp_currentFood_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_maxFood = { "maxFood", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, maxFood), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxFood_MetaData), NewProp_maxFood_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_currentWater = { "currentWater", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, currentWater), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentWater_MetaData), NewProp_currentWater_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_maxWater = { "maxWater", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, maxWater), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxWater_MetaData), NewProp_maxWater_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_TraceChannelProperty = { "TraceChannelProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSurvivalCharacter, TraceChannelProperty), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannelProperty_MetaData), NewProp_TraceChannelProperty_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSurvivalCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_TPPCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_FPPCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_GrappleCable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_Aim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_Sprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_SwitchPov,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_Interact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_Fire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_Grapple,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsTPP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_bIsSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_movementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_sneakMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_sprintMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_currentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_currentFood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_maxFood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_currentWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_maxWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSurvivalCharacter_Statics::NewProp_TraceChannelProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSurvivalCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATPSurvivalCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TPSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSurvivalCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSurvivalCharacter_Statics::ClassParams = {
	&ATPSurvivalCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATPSurvivalCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATPSurvivalCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSurvivalCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSurvivalCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSurvivalCharacter()
{
	if (!Z_Registration_Info_UClass_ATPSurvivalCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSurvivalCharacter.OuterSingleton, Z_Construct_UClass_ATPSurvivalCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSurvivalCharacter.OuterSingleton;
}
template<> TPSURVIVAL_API UClass* StaticClass<ATPSurvivalCharacter>()
{
	return ATPSurvivalCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSurvivalCharacter);
ATPSurvivalCharacter::~ATPSurvivalCharacter() {}
// End Class ATPSurvivalCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documentos_Github_ProjectSurvival_TPSurvival_Source_TPSurvival_Public_TPSurvivalCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSurvivalCharacter, ATPSurvivalCharacter::StaticClass, TEXT("ATPSurvivalCharacter"), &Z_Registration_Info_UClass_ATPSurvivalCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSurvivalCharacter), 3242490316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documentos_Github_ProjectSurvival_TPSurvival_Source_TPSurvival_Public_TPSurvivalCharacter_h_1835616066(TEXT("/Script/TPSurvival"),
	Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documentos_Github_ProjectSurvival_TPSurvival_Source_TPSurvival_Public_TPSurvivalCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documentos_Github_ProjectSurvival_TPSurvival_Source_TPSurvival_Public_TPSurvivalCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
