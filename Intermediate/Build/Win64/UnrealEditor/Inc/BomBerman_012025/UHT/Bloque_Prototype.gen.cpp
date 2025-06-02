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
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBloque_Prototype();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBloque_Prototype_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Interface UBloque_Prototype
void UBloque_Prototype::StaticRegisterNativesUBloque_Prototype()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBloque_Prototype);
UClass* Z_Construct_UClass_UBloque_Prototype_NoRegister()
{
	return UBloque_Prototype::StaticClass();
}
struct Z_Construct_UClass_UBloque_Prototype_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Prototype/Bloque_Prototype.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBloque_Prototype>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBloque_Prototype_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBloque_Prototype_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBloque_Prototype_Statics::ClassParams = {
	&UBloque_Prototype::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBloque_Prototype_Statics::Class_MetaDataParams), Z_Construct_UClass_UBloque_Prototype_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBloque_Prototype()
{
	if (!Z_Registration_Info_UClass_UBloque_Prototype.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBloque_Prototype.OuterSingleton, Z_Construct_UClass_UBloque_Prototype_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBloque_Prototype.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UBloque_Prototype>()
{
	return UBloque_Prototype::StaticClass();
}
UBloque_Prototype::UBloque_Prototype(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBloque_Prototype);
UBloque_Prototype::~UBloque_Prototype() {}
// End Interface UBloque_Prototype

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_Bloque_Prototype_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBloque_Prototype, UBloque_Prototype::StaticClass, TEXT("UBloque_Prototype"), &Z_Registration_Info_UClass_UBloque_Prototype, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBloque_Prototype), 2636567817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_Bloque_Prototype_h_2512892015(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_Bloque_Prototype_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_Bloque_Prototype_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
