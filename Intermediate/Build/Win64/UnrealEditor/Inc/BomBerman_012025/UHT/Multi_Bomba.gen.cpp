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
BOMBERMAN_012025_API UScriptStruct* Z_Construct_UScriptStruct_FBombaData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin ScriptStruct FBombaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BombaData;
class UScriptStruct* FBombaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BombaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BombaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBombaData, (UObject*)Z_Construct_UPackage__Script_BomBerman_012025(), TEXT("BombaData"));
	}
	return Z_Registration_Info_UScriptStruct_BombaData.OuterSingleton;
}
template<> BOMBERMAN_012025_API UScriptStruct* StaticStruct<FBombaData>()
{
	return FBombaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBombaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoParaExplotar_MetaData[] = {
		{ "Category", "BombaData" },
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangoExplosion_MetaData[] = {
		{ "Category", "BombaData" },
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoParaExplotar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangoExplosion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBombaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBombaData_Statics::NewProp_TiempoParaExplotar = { "TiempoParaExplotar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBombaData, TiempoParaExplotar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoParaExplotar_MetaData), NewProp_TiempoParaExplotar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBombaData_Statics::NewProp_RangoExplosion = { "RangoExplosion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBombaData, RangoExplosion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangoExplosion_MetaData), NewProp_RangoExplosion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBombaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBombaData_Statics::NewProp_TiempoParaExplotar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBombaData_Statics::NewProp_RangoExplosion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBombaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBombaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
	nullptr,
	&NewStructOps,
	"BombaData",
	Z_Construct_UScriptStruct_FBombaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBombaData_Statics::PropPointers),
	sizeof(FBombaData),
	alignof(FBombaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBombaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBombaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBombaData()
{
	if (!Z_Registration_Info_UScriptStruct_BombaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BombaData.InnerSingleton, Z_Construct_UScriptStruct_FBombaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BombaData.InnerSingleton;
}
// End ScriptStruct FBombaData

// Begin Class AMulti_Bomba
void AMulti_Bomba::StaticRegisterNativesAMulti_Bomba()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Multi_Bomba" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EfectoExplosion_MetaData[] = {
		{ "Category", "Multi_Bomba" },
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatosBomba_MetaData[] = {
		{ "Category", "Multi_Bomba" },
		{ "ModuleRelativePath", "Public/Propotype/Multi_Bomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EfectoExplosion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DatosBomba;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMulti_Bomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMulti_Bomba, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_EfectoExplosion = { "EfectoExplosion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMulti_Bomba, EfectoExplosion), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EfectoExplosion_MetaData), NewProp_EfectoExplosion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_DatosBomba = { "DatosBomba", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMulti_Bomba, DatosBomba), Z_Construct_UScriptStruct_FBombaData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatosBomba_MetaData), NewProp_DatosBomba_MetaData) }; // 734284689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMulti_Bomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_EfectoExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMulti_Bomba_Statics::NewProp_DatosBomba,
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
	nullptr,
	Z_Construct_UClass_AMulti_Bomba_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBombaData::StaticStruct, Z_Construct_UScriptStruct_FBombaData_Statics::NewStructOps, TEXT("BombaData"), &Z_Registration_Info_UScriptStruct_BombaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBombaData), 734284689U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMulti_Bomba, AMulti_Bomba::StaticClass, TEXT("AMulti_Bomba"), &Z_Registration_Info_UClass_AMulti_Bomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMulti_Bomba), 1222465432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Multi_Bomba_h_621290029(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Multi_Bomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Multi_Bomba_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Multi_Bomba_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Propotype_Multi_Bomba_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
