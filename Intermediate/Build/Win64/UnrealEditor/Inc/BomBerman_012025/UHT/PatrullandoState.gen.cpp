// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/PatrullandoState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrullandoState() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APatrullandoState();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APatrullandoState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class APatrullandoState
void APatrullandoState::StaticRegisterNativesAPatrullandoState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APatrullandoState);
UClass* Z_Construct_UClass_APatrullandoState_NoRegister()
{
	return APatrullandoState::StaticClass();
}
struct Z_Construct_UClass_APatrullandoState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PatrullandoState.h" },
		{ "ModuleRelativePath", "Public/PatrullandoState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrullandoState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APatrullandoState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatrullandoState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APatrullandoState_Statics::ClassParams = {
	&APatrullandoState::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APatrullandoState_Statics::Class_MetaDataParams), Z_Construct_UClass_APatrullandoState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APatrullandoState()
{
	if (!Z_Registration_Info_UClass_APatrullandoState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APatrullandoState.OuterSingleton, Z_Construct_UClass_APatrullandoState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APatrullandoState.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<APatrullandoState>()
{
	return APatrullandoState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APatrullandoState);
APatrullandoState::~APatrullandoState() {}
// End Class APatrullandoState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_PatrullandoState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APatrullandoState, APatrullandoState::StaticClass, TEXT("APatrullandoState"), &Z_Registration_Info_UClass_APatrullandoState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APatrullandoState), 3395030600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_PatrullandoState_h_1653969803(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_PatrullandoState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_PatrullandoState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
