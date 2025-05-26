// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Bloques/Bloque_Puerta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Puerta() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Puerta();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Puerta_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBase();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABloque_Puerta
void ABloque_Puerta::StaticRegisterNativesABloque_Puerta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Puerta);
UClass* Z_Construct_UClass_ABloque_Puerta_NoRegister()
{
	return ABloque_Puerta::StaticClass();
}
struct Z_Construct_UClass_ABloque_Puerta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Bloques/Bloque_Puerta.h" },
		{ "ModuleRelativePath", "Public/Bloques/Bloque_Puerta.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Puerta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Puerta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Puerta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Puerta_Statics::ClassParams = {
	&ABloque_Puerta::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Puerta_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Puerta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Puerta()
{
	if (!Z_Registration_Info_UClass_ABloque_Puerta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Puerta.OuterSingleton, Z_Construct_UClass_ABloque_Puerta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Puerta.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque_Puerta>()
{
	return ABloque_Puerta::StaticClass();
}
ABloque_Puerta::ABloque_Puerta() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Puerta);
ABloque_Puerta::~ABloque_Puerta() {}
// End Class ABloque_Puerta

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Puerta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Puerta, ABloque_Puerta::StaticClass, TEXT("ABloque_Puerta"), &Z_Registration_Info_UClass_ABloque_Puerta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Puerta), 1487638956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Puerta_h_2005905145(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Puerta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Puerta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
