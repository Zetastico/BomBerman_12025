// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/2do_Parcial/2P_Prototype/Bloque_Prototype.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Prototype() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Prototype();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Prototype_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABloque_Prototype
void ABloque_Prototype::StaticRegisterNativesABloque_Prototype()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Prototype);
UClass* Z_Construct_UClass_ABloque_Prototype_NoRegister()
{
	return ABloque_Prototype::StaticClass();
}
struct Z_Construct_UClass_ABloque_Prototype_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "2do_Parcial/2P_Prototype/Bloque_Prototype.h" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Prototype/Bloque_Prototype.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Prototype>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Prototype_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Prototype_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Prototype_Statics::ClassParams = {
	&ABloque_Prototype::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Prototype_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Prototype_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Prototype()
{
	if (!Z_Registration_Info_UClass_ABloque_Prototype.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Prototype.OuterSingleton, Z_Construct_UClass_ABloque_Prototype_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Prototype.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque_Prototype>()
{
	return ABloque_Prototype::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Prototype);
ABloque_Prototype::~ABloque_Prototype() {}
// End Class ABloque_Prototype

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_Bloque_Prototype_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Prototype, ABloque_Prototype::StaticClass, TEXT("ABloque_Prototype"), &Z_Registration_Info_UClass_ABloque_Prototype, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Prototype), 1779535700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_Bloque_Prototype_h_2170844110(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_Bloque_Prototype_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_Bloque_Prototype_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
