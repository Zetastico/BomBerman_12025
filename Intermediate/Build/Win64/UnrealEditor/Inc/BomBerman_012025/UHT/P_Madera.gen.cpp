// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/2do_Parcial/2P_Prototype/P_Madera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_Madera() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AP_Madera();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AP_Madera_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBloque_Prototype_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AP_Madera
void AP_Madera::StaticRegisterNativesAP_Madera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AP_Madera);
UClass* Z_Construct_UClass_AP_Madera_NoRegister()
{
	return AP_Madera::StaticClass();
}
struct Z_Construct_UClass_AP_Madera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "2do_Parcial/2P_Prototype/P_Madera.h" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Prototype/P_Madera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "P_Madera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Prototype/P_Madera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_Madera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_Madera_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AP_Madera, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AP_Madera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_Madera_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AP_Madera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AP_Madera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AP_Madera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AP_Madera_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBloque_Prototype_NoRegister, (int32)VTABLE_OFFSET(AP_Madera, IBloque_Prototype), false },  // 2636567817
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AP_Madera_Statics::ClassParams = {
	&AP_Madera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AP_Madera_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AP_Madera_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AP_Madera_Statics::Class_MetaDataParams), Z_Construct_UClass_AP_Madera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AP_Madera()
{
	if (!Z_Registration_Info_UClass_AP_Madera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AP_Madera.OuterSingleton, Z_Construct_UClass_AP_Madera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AP_Madera.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AP_Madera>()
{
	return AP_Madera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AP_Madera);
AP_Madera::~AP_Madera() {}
// End Class AP_Madera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_P_Madera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AP_Madera, AP_Madera::StaticClass, TEXT("AP_Madera"), &Z_Registration_Info_UClass_AP_Madera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AP_Madera), 2135727925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_P_Madera_h_1708809817(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_P_Madera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_P_Madera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
