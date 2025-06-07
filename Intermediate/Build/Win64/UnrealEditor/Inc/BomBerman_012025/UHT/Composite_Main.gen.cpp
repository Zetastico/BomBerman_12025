// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Composite/Composite_Main.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposite_Main() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AComposite_Main();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AComposite_Main_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AComposite_Main
void AComposite_Main::StaticRegisterNativesAComposite_Main()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AComposite_Main);
UClass* Z_Construct_UClass_AComposite_Main_NoRegister()
{
	return AComposite_Main::StaticClass();
}
struct Z_Construct_UClass_AComposite_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Composite/Composite_Main.h" },
		{ "ModuleRelativePath", "Public/Composite/Composite_Main.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComposite_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AComposite_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AComposite_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AComposite_Main_Statics::ClassParams = {
	&AComposite_Main::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AComposite_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_AComposite_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AComposite_Main()
{
	if (!Z_Registration_Info_UClass_AComposite_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AComposite_Main.OuterSingleton, Z_Construct_UClass_AComposite_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AComposite_Main.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AComposite_Main>()
{
	return AComposite_Main::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AComposite_Main);
AComposite_Main::~AComposite_Main() {}
// End Class AComposite_Main

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Composite_Main_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AComposite_Main, AComposite_Main::StaticClass, TEXT("AComposite_Main"), &Z_Registration_Info_UClass_AComposite_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AComposite_Main), 1013674775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Composite_Main_h_722039610(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Composite_Main_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Composite_Main_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
