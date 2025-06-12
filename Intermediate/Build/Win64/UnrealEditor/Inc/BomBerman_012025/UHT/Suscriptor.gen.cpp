// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Observer/Suscriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuscriptor() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_USuscriptor();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_USuscriptor_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Interface USuscriptor
void USuscriptor::StaticRegisterNativesUSuscriptor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USuscriptor);
UClass* Z_Construct_UClass_USuscriptor_NoRegister()
{
	return USuscriptor::StaticClass();
}
struct Z_Construct_UClass_USuscriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Observer/Suscriptor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISuscriptor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USuscriptor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USuscriptor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USuscriptor_Statics::ClassParams = {
	&USuscriptor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USuscriptor_Statics::Class_MetaDataParams), Z_Construct_UClass_USuscriptor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USuscriptor()
{
	if (!Z_Registration_Info_UClass_USuscriptor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USuscriptor.OuterSingleton, Z_Construct_UClass_USuscriptor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USuscriptor.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<USuscriptor>()
{
	return USuscriptor::StaticClass();
}
USuscriptor::USuscriptor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USuscriptor);
USuscriptor::~USuscriptor() {}
// End Interface USuscriptor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Suscriptor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USuscriptor, USuscriptor::StaticClass, TEXT("USuscriptor"), &Z_Registration_Info_UClass_USuscriptor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USuscriptor), 731658279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Suscriptor_h_22991258(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Suscriptor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Suscriptor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
