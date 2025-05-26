// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Factory/Mapa_Factory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapa_Factory() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapa_Factory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapa_Factory_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AMapa_Factory
void AMapa_Factory::StaticRegisterNativesAMapa_Factory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapa_Factory);
UClass* Z_Construct_UClass_AMapa_Factory_NoRegister()
{
	return AMapa_Factory::StaticClass();
}
struct Z_Construct_UClass_AMapa_Factory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factory/Mapa_Factory.h" },
		{ "ModuleRelativePath", "Public/Factory/Mapa_Factory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapa_Factory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMapa_Factory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapa_Factory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapa_Factory_Statics::ClassParams = {
	&AMapa_Factory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapa_Factory_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapa_Factory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapa_Factory()
{
	if (!Z_Registration_Info_UClass_AMapa_Factory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapa_Factory.OuterSingleton, Z_Construct_UClass_AMapa_Factory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapa_Factory.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AMapa_Factory>()
{
	return AMapa_Factory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapa_Factory);
AMapa_Factory::~AMapa_Factory() {}
// End Class AMapa_Factory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Mapa_Factory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapa_Factory, AMapa_Factory::StaticClass, TEXT("AMapa_Factory"), &Z_Registration_Info_UClass_AMapa_Factory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapa_Factory), 2608926158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Mapa_Factory_h_3381729607(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Mapa_Factory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Mapa_Factory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
