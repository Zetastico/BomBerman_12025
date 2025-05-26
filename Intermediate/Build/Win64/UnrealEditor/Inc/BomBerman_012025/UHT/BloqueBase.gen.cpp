// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/BloqueBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBase() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBase();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABloqueBase
void ABloqueBase::StaticRegisterNativesABloqueBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueBase);
UClass* Z_Construct_UClass_ABloqueBase_NoRegister()
{
	return ABloqueBase::StaticClass();
}
struct Z_Construct_UClass_ABloqueBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueBase.h" },
		{ "ModuleRelativePath", "Public/BloqueBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEsDestructible_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "Public/BloqueBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEsDestructible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEsDestructible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ABloqueBase_Statics::NewProp_bEsDestructible_SetBit(void* Obj)
{
	((ABloqueBase*)Obj)->bEsDestructible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABloqueBase_Statics::NewProp_bEsDestructible = { "bEsDestructible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABloqueBase), &Z_Construct_UClass_ABloqueBase_Statics::NewProp_bEsDestructible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEsDestructible_MetaData), NewProp_bEsDestructible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBase_Statics::NewProp_bEsDestructible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBase_Statics::ClassParams = {
	&ABloqueBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueBase()
{
	if (!Z_Registration_Info_UClass_ABloqueBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueBase.OuterSingleton, Z_Construct_UClass_ABloqueBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueBase.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueBase>()
{
	return ABloqueBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBase);
ABloqueBase::~ABloqueBase() {}
// End Class ABloqueBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_BloqueBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueBase, ABloqueBase::StaticClass, TEXT("ABloqueBase"), &Z_Registration_Info_UClass_ABloqueBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueBase), 3991346048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_BloqueBase_h_2748638747(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_BloqueBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_BloqueBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
