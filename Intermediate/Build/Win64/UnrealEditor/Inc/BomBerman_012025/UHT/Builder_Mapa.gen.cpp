// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Builder/Builder_Mapa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder_Mapa() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBuilder_Mapa();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBuilder_Mapa_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Interface UBuilder_Mapa
void UBuilder_Mapa::StaticRegisterNativesUBuilder_Mapa()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuilder_Mapa);
UClass* Z_Construct_UClass_UBuilder_Mapa_NoRegister()
{
	return UBuilder_Mapa::StaticClass();
}
struct Z_Construct_UClass_UBuilder_Mapa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Builder/Builder_Mapa.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuilder_Mapa>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBuilder_Mapa_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuilder_Mapa_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuilder_Mapa_Statics::ClassParams = {
	&UBuilder_Mapa::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuilder_Mapa_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuilder_Mapa_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuilder_Mapa()
{
	if (!Z_Registration_Info_UClass_UBuilder_Mapa.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuilder_Mapa.OuterSingleton, Z_Construct_UClass_UBuilder_Mapa_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuilder_Mapa.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UBuilder_Mapa>()
{
	return UBuilder_Mapa::StaticClass();
}
UBuilder_Mapa::UBuilder_Mapa(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuilder_Mapa);
UBuilder_Mapa::~UBuilder_Mapa() {}
// End Interface UBuilder_Mapa

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Mapa_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuilder_Mapa, UBuilder_Mapa::StaticClass, TEXT("UBuilder_Mapa"), &Z_Registration_Info_UClass_UBuilder_Mapa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuilder_Mapa), 3950541387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Mapa_h_3243062831(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Mapa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Mapa_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
