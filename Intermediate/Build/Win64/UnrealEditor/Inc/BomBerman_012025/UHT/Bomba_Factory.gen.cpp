// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Factory/Bomba_Factory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomba_Factory() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomba_Factory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomba_Factory_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABomba_Factory
void ABomba_Factory::StaticRegisterNativesABomba_Factory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomba_Factory);
UClass* Z_Construct_UClass_ABomba_Factory_NoRegister()
{
	return ABomba_Factory::StaticClass();
}
struct Z_Construct_UClass_ABomba_Factory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factory/Bomba_Factory.h" },
		{ "ModuleRelativePath", "Public/Factory/Bomba_Factory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomba_Factory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABomba_Factory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Factory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomba_Factory_Statics::ClassParams = {
	&ABomba_Factory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Factory_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomba_Factory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomba_Factory()
{
	if (!Z_Registration_Info_UClass_ABomba_Factory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomba_Factory.OuterSingleton, Z_Construct_UClass_ABomba_Factory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomba_Factory.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABomba_Factory>()
{
	return ABomba_Factory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomba_Factory);
ABomba_Factory::~ABomba_Factory() {}
// End Class ABomba_Factory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Bomba_Factory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomba_Factory, ABomba_Factory::StaticClass, TEXT("ABomba_Factory"), &Z_Registration_Info_UClass_ABomba_Factory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomba_Factory), 634063934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Bomba_Factory_h_4067301909(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Bomba_Factory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Factory_Bomba_Factory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
