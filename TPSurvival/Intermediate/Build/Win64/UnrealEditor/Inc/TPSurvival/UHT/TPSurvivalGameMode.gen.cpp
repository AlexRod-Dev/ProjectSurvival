// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSurvival/Public/TPSurvivalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSurvivalGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TPSURVIVAL_API UClass* Z_Construct_UClass_ATPSurvivalGameMode();
TPSURVIVAL_API UClass* Z_Construct_UClass_ATPSurvivalGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPSurvival();
// End Cross Module References

// Begin Class ATPSurvivalGameMode
void ATPSurvivalGameMode::StaticRegisterNativesATPSurvivalGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSurvivalGameMode);
UClass* Z_Construct_UClass_ATPSurvivalGameMode_NoRegister()
{
	return ATPSurvivalGameMode::StaticClass();
}
struct Z_Construct_UClass_ATPSurvivalGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPSurvivalGameMode.h" },
		{ "ModuleRelativePath", "Public/TPSurvivalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSurvivalGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPSurvivalGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TPSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSurvivalGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSurvivalGameMode_Statics::ClassParams = {
	&ATPSurvivalGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSurvivalGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSurvivalGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSurvivalGameMode()
{
	if (!Z_Registration_Info_UClass_ATPSurvivalGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSurvivalGameMode.OuterSingleton, Z_Construct_UClass_ATPSurvivalGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSurvivalGameMode.OuterSingleton;
}
template<> TPSURVIVAL_API UClass* StaticClass<ATPSurvivalGameMode>()
{
	return ATPSurvivalGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSurvivalGameMode);
ATPSurvivalGameMode::~ATPSurvivalGameMode() {}
// End Class ATPSurvivalGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documentos_Github_ProjectSurvival_TPSurvival_Source_TPSurvival_Public_TPSurvivalGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSurvivalGameMode, ATPSurvivalGameMode::StaticClass, TEXT("ATPSurvivalGameMode"), &Z_Registration_Info_UClass_ATPSurvivalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSurvivalGameMode), 3405732396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documentos_Github_ProjectSurvival_TPSurvival_Source_TPSurvival_Public_TPSurvivalGameMode_h_1807019837(TEXT("/Script/TPSurvival"),
	Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documentos_Github_ProjectSurvival_TPSurvival_Source_TPSurvival_Public_TPSurvivalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documentos_Github_ProjectSurvival_TPSurvival_Source_TPSurvival_Public_TPSurvivalGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
