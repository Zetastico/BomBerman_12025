// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Bloques/Bloque_Destruible.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Destruible() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Destruible();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Destruible_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBase();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABloque_Destruible
void ABloque_Destruible::StaticRegisterNativesABloque_Destruible()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Destruible);
UClass* Z_Construct_UClass_ABloque_Destruible_NoRegister()
{
	return ABloque_Destruible::StaticClass();
}
struct Z_Construct_UClass_ABloque_Destruible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Bloques/Bloque_Destruible.h" },
		{ "ModuleRelativePath", "Public/Bloques/Bloque_Destruible.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Destruible>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Destruible_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Destruible_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Destruible_Statics::ClassParams = {
	&ABloque_Destruible::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Destruible_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Destruible_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Destruible()
{
	if (!Z_Registration_Info_UClass_ABloque_Destruible.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Destruible.OuterSingleton, Z_Construct_UClass_ABloque_Destruible_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Destruible.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque_Destruible>()
{
	return ABloque_Destruible::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Destruible);
ABloque_Destruible::~ABloque_Destruible() {}
// End Class ABloque_Destruible

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Destruible_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Destruible, ABloque_Destruible::StaticClass, TEXT("ABloque_Destruible"), &Z_Registration_Info_UClass_ABloque_Destruible, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Destruible), 1361218570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Destruible_h_318923425(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Destruible_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Destruible_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
