// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Propotype/Multi_Bomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMulti_Bomba() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMulti_Bomba();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMulti_Bomba_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBomba_Prototype_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AMulti_Bomba Function Explotar
struct Z_Construct_UFunction_AMulti_Bomba_Explotar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulti_Bomba_Explotar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulti_Bomba, nullptr, "Explotar", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulti_Bomba_Explotar_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMulti_Bomba_Explotar_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMulti_Bomba_Explotar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMulti_Bomba_Explotar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMulti_Bomba::execExplotar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Explotar();
	P_NATIVE_END;
}
// End Class AMulti_Bomba Function Explotar

// Begin Class AMulti_Bomba
void AMulti_Bomba::StaticRegisterNativesAMulti_Bomba()
{
	UClass* Class = AMulti_Bomba::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Explotar", &AMulti_Bomba::execExplotar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMulti_Bomba);
UClass* Z_Construct_UClass_AMulti_Bomba_NoRegister()
{
	return AMulti_Bomba::StaticClass();
}
struct Z_Construct_UClass_AMulti_Bomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Propotype/Multi_Bomba.h" },
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoParaExplotar_MetaData[] = {
		{ "Category", "Multi_Bomba" },
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangoExplosion_MetaData[] = {
		{ "Category", "Multi_Bomba" },
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EfectoExplosion_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoParaExplotar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangoExplosion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EfectoExplosion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMulti_Bomba_Explotar, "Explotar" }, // 634260149
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMulti_Bomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_TiempoParaExplotar = { "TiempoParaExplotar", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMulti_Bomba, TiempoParaExplotar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoParaExplotar_MetaData), NewProp_TiempoParaExplotar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_RangoExplosion = { "RangoExplosion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMulti_Bomba, RangoExplosion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangoExplosion_MetaData), NewProp_RangoExplosion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_EfectoExplosion = { "EfectoExplosion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMulti_Bomba, EfectoExplosion), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EfectoExplosion_MetaData), NewProp_EfectoExplosion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMulti_Bomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_TiempoParaExplotar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_RangoExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_EfectoExplosion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulti_Bomba_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMulti_Bomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulti_Bomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMulti_Bomba_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBomba_Prototype_NoRegister, (int32)VTABLE_OFFSET(AMulti_Bomba, IBomba_Prototype), false },  // 123995634
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMulti_Bomba_Statics::ClassParams = {
	&AMulti_Bomba::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMulti_Bomba_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMulti_Bomba_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMulti_Bomba_Statics::Class_MetaDataParams), Z_Construct_UClass_AMulti_Bomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMulti_Bomba()
{
	if (!Z_Registration_Info_UClass_AMulti_Bomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMulti_Bomba.OuterSingleton, Z_Construct_UClass_AMulti_Bomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMulti_Bomba.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AMulti_Bomba>()
{
	return AMulti_Bomba::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMulti_Bomba);
AMulti_Bomba::~AMulti_Bomba() {}
// End Class AMulti_Bomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Multi_Bomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMulti_Bomba, AMulti_Bomba::StaticClass, TEXT("AMulti_Bomba"), &Z_Registration_Info_UClass_AMulti_Bomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMulti_Bomba), 2844314231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Multi_Bomba_h_536826740(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Multi_Bomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Multi_Bomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
