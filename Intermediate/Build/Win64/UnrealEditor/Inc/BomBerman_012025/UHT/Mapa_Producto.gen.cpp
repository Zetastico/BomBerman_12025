// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Builder/Mapa_Producto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapa_Producto() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBase_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapa_Producto();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapa_Producto_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AMapa_Producto
void AMapa_Producto::StaticRegisterNativesAMapa_Producto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapa_Producto);
UClass* Z_Construct_UClass_AMapa_Producto_NoRegister()
{
	return AMapa_Producto::StaticClass();
}
struct Z_Construct_UClass_AMapa_Producto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder/Mapa_Producto.h" },
		{ "ModuleRelativePath", "Public/Builder/Mapa_Producto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bloques_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builder/Mapa_Producto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bloques_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bloques;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapa_Producto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapa_Producto_Statics::NewProp_Bloques_Inner = { "Bloques", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloqueBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapa_Producto_Statics::NewProp_Bloques = { "Bloques", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapa_Producto, Bloques), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bloques_MetaData), NewProp_Bloques_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapa_Producto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapa_Producto_Statics::NewProp_Bloques_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapa_Producto_Statics::NewProp_Bloques,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapa_Producto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapa_Producto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapa_Producto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapa_Producto_Statics::ClassParams = {
	&AMapa_Producto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapa_Producto_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapa_Producto_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapa_Producto_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapa_Producto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapa_Producto()
{
	if (!Z_Registration_Info_UClass_AMapa_Producto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapa_Producto.OuterSingleton, Z_Construct_UClass_AMapa_Producto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapa_Producto.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AMapa_Producto>()
{
	return AMapa_Producto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapa_Producto);
AMapa_Producto::~AMapa_Producto() {}
// End Class AMapa_Producto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Mapa_Producto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapa_Producto, AMapa_Producto::StaticClass, TEXT("AMapa_Producto"), &Z_Registration_Info_UClass_AMapa_Producto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapa_Producto), 559891275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Mapa_Producto_h_4143031051(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Mapa_Producto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Mapa_Producto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
