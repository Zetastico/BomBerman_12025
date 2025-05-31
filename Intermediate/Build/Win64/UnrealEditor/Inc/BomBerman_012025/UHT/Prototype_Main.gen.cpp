// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Propotype/Prototype_Main.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototype_Main() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APrototype_Main();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APrototype_Main_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class APrototype_Main
void APrototype_Main::StaticRegisterNativesAPrototype_Main()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrototype_Main);
UClass* Z_Construct_UClass_APrototype_Main_NoRegister()
{
	return APrototype_Main::StaticClass();
}
struct Z_Construct_UClass_APrototype_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Propotype/Prototype_Main.h" },
		{ "ModuleRelativePath", "Public/Propotype/Prototype_Main.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototype_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APrototype_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrototype_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrototype_Main_Statics::ClassParams = {
	&APrototype_Main::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrototype_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_APrototype_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrototype_Main()
{
	if (!Z_Registration_Info_UClass_APrototype_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrototype_Main.OuterSingleton, Z_Construct_UClass_APrototype_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrototype_Main.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<APrototype_Main>()
{
	return APrototype_Main::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrototype_Main);
APrototype_Main::~APrototype_Main() {}
// End Class APrototype_Main

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Prototype_Main_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrototype_Main, APrototype_Main::StaticClass, TEXT("APrototype_Main"), &Z_Registration_Info_UClass_APrototype_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrototype_Main), 1171860405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Prototype_Main_h_3360885286(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Prototype_Main_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Prototype_Main_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
