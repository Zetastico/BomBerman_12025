// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/2do_Parcial/2P_Builder/Builder_Enemigos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder_Enemigos() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBuilder_Enemigos();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBuilder_Enemigos_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Interface UBuilder_Enemigos
void UBuilder_Enemigos::StaticRegisterNativesUBuilder_Enemigos()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuilder_Enemigos);
UClass* Z_Construct_UClass_UBuilder_Enemigos_NoRegister()
{
	return UBuilder_Enemigos::StaticClass();
}
struct Z_Construct_UClass_UBuilder_Enemigos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Builder/Builder_Enemigos.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuilder_Enemigos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBuilder_Enemigos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuilder_Enemigos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuilder_Enemigos_Statics::ClassParams = {
	&UBuilder_Enemigos::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuilder_Enemigos_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuilder_Enemigos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuilder_Enemigos()
{
	if (!Z_Registration_Info_UClass_UBuilder_Enemigos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuilder_Enemigos.OuterSingleton, Z_Construct_UClass_UBuilder_Enemigos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuilder_Enemigos.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UBuilder_Enemigos>()
{
	return UBuilder_Enemigos::StaticClass();
}
UBuilder_Enemigos::UBuilder_Enemigos(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuilder_Enemigos);
UBuilder_Enemigos::~UBuilder_Enemigos() {}
// End Interface UBuilder_Enemigos

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuilder_Enemigos, UBuilder_Enemigos::StaticClass, TEXT("UBuilder_Enemigos"), &Z_Registration_Info_UClass_UBuilder_Enemigos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuilder_Enemigos), 1670874435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_h_1221237770(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
