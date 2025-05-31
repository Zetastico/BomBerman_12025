// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Factory/Enemigo_Factory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo_Factory() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_Factory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_Factory_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AEnemigo_Factory
void AEnemigo_Factory::StaticRegisterNativesAEnemigo_Factory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigo_Factory);
UClass* Z_Construct_UClass_AEnemigo_Factory_NoRegister()
{
	return AEnemigo_Factory::StaticClass();
}
struct Z_Construct_UClass_AEnemigo_Factory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factory/Enemigo_Factory.h" },
		{ "ModuleRelativePath", "Public/Factory/Enemigo_Factory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo_Factory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigo_Factory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Factory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Factory_Statics::ClassParams = {
	&AEnemigo_Factory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Factory_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigo_Factory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigo_Factory()
{
	if (!Z_Registration_Info_UClass_AEnemigo_Factory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigo_Factory.OuterSingleton, Z_Construct_UClass_AEnemigo_Factory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigo_Factory.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigo_Factory>()
{
	return AEnemigo_Factory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo_Factory);
AEnemigo_Factory::~AEnemigo_Factory() {}
// End Class AEnemigo_Factory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Enemigo_Factory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigo_Factory, AEnemigo_Factory::StaticClass, TEXT("AEnemigo_Factory"), &Z_Registration_Info_UClass_AEnemigo_Factory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo_Factory), 3982631678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Enemigo_Factory_h_2968852305(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Enemigo_Factory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Enemigo_Factory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
