// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/2do_Parcial/2P_Prototype/P_Titilante.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_Titilante() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AP_Titilante();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AP_Titilante_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBloque_Prototype_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AP_Titilante
void AP_Titilante::StaticRegisterNativesAP_Titilante()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AP_Titilante);
UClass* Z_Construct_UClass_AP_Titilante_NoRegister()
{
	return AP_Titilante::StaticClass();
}
struct Z_Construct_UClass_AP_Titilante_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "2do_Parcial/2P_Prototype/P_Titilante.h" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Prototype/P_Titilante.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "P_Titilante" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//La malla del bloque\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Prototype/P_Titilante.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "La malla del bloque" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoVisible_MetaData[] = {
		{ "Category", "P_Titilante" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tiempo visible del bloque\n" },
#endif
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Prototype/P_Titilante.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tiempo visible del bloque" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoInvisible_MetaData[] = {
		{ "Category", "P_Titilante" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tiempo invisible del bloque\n" },
#endif
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Prototype/P_Titilante.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tiempo invisible del bloque" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoVisible;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoInvisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_Titilante>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_Titilante_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AP_Titilante, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AP_Titilante_Statics::NewProp_TiempoVisible = { "TiempoVisible", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AP_Titilante, TiempoVisible), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoVisible_MetaData), NewProp_TiempoVisible_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AP_Titilante_Statics::NewProp_TiempoInvisible = { "TiempoInvisible", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AP_Titilante, TiempoInvisible), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoInvisible_MetaData), NewProp_TiempoInvisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AP_Titilante_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_Titilante_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_Titilante_Statics::NewProp_TiempoVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_Titilante_Statics::NewProp_TiempoInvisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AP_Titilante_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AP_Titilante_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AP_Titilante_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AP_Titilante_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBloque_Prototype_NoRegister, (int32)VTABLE_OFFSET(AP_Titilante, IBloque_Prototype), false },  // 2636567817
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AP_Titilante_Statics::ClassParams = {
	&AP_Titilante::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AP_Titilante_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AP_Titilante_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AP_Titilante_Statics::Class_MetaDataParams), Z_Construct_UClass_AP_Titilante_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AP_Titilante()
{
	if (!Z_Registration_Info_UClass_AP_Titilante.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AP_Titilante.OuterSingleton, Z_Construct_UClass_AP_Titilante_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AP_Titilante.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AP_Titilante>()
{
	return AP_Titilante::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AP_Titilante);
AP_Titilante::~AP_Titilante() {}
// End Class AP_Titilante

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_P_Titilante_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AP_Titilante, AP_Titilante::StaticClass, TEXT("AP_Titilante"), &Z_Registration_Info_UClass_AP_Titilante, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AP_Titilante), 268261604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_P_Titilante_h_3971619763(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_P_Titilante_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Prototype_P_Titilante_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
