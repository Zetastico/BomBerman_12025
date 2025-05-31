// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Propotype/Bomba_Prototype.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomba_Prototype() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBomba_Prototype();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBomba_Prototype_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Interface UBomba_Prototype
void UBomba_Prototype::StaticRegisterNativesUBomba_Prototype()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBomba_Prototype);
UClass* Z_Construct_UClass_UBomba_Prototype_NoRegister()
{
	return UBomba_Prototype::StaticClass();
}
struct Z_Construct_UClass_UBomba_Prototype_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Propotype/Bomba_Prototype.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBomba_Prototype>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBomba_Prototype_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBomba_Prototype_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBomba_Prototype_Statics::ClassParams = {
	&UBomba_Prototype::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBomba_Prototype_Statics::Class_MetaDataParams), Z_Construct_UClass_UBomba_Prototype_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBomba_Prototype()
{
	if (!Z_Registration_Info_UClass_UBomba_Prototype.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBomba_Prototype.OuterSingleton, Z_Construct_UClass_UBomba_Prototype_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBomba_Prototype.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UBomba_Prototype>()
{
	return UBomba_Prototype::StaticClass();
}
UBomba_Prototype::UBomba_Prototype(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBomba_Prototype);
UBomba_Prototype::~UBomba_Prototype() {}
// End Interface UBomba_Prototype

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Bomba_Prototype_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBomba_Prototype, UBomba_Prototype::StaticClass, TEXT("UBomba_Prototype"), &Z_Registration_Info_UClass_UBomba_Prototype, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBomba_Prototype), 123995634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Bomba_Prototype_h_942711746(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Bomba_Prototype_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Bomba_Prototype_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
