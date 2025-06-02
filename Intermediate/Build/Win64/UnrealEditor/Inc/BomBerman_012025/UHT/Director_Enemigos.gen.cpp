// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/2do_Parcial/2P_Builder/Director_Enemigos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirector_Enemigos() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADirector_Enemigos();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADirector_Enemigos_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ADirector_Enemigos
void ADirector_Enemigos::StaticRegisterNativesADirector_Enemigos()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirector_Enemigos);
UClass* Z_Construct_UClass_ADirector_Enemigos_NoRegister()
{
	return ADirector_Enemigos::StaticClass();
}
struct Z_Construct_UClass_ADirector_Enemigos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "2do_Parcial/2P_Builder/Director_Enemigos.h" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Builder/Director_Enemigos.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirector_Enemigos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADirector_Enemigos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirector_Enemigos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirector_Enemigos_Statics::ClassParams = {
	&ADirector_Enemigos::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirector_Enemigos_Statics::Class_MetaDataParams), Z_Construct_UClass_ADirector_Enemigos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADirector_Enemigos()
{
	if (!Z_Registration_Info_UClass_ADirector_Enemigos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirector_Enemigos.OuterSingleton, Z_Construct_UClass_ADirector_Enemigos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADirector_Enemigos.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ADirector_Enemigos>()
{
	return ADirector_Enemigos::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADirector_Enemigos);
ADirector_Enemigos::~ADirector_Enemigos() {}
// End Class ADirector_Enemigos

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Director_Enemigos_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADirector_Enemigos, ADirector_Enemigos::StaticClass, TEXT("ADirector_Enemigos"), &Z_Registration_Info_UClass_ADirector_Enemigos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirector_Enemigos), 2946564315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Director_Enemigos_h_1125588973(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Director_Enemigos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Director_Enemigos_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
