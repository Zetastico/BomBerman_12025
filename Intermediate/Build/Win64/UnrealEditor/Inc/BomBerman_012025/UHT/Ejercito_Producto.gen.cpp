// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/2do_Parcial/2P_Builder/Ejercito_Producto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEjercito_Producto() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEjercito_Producto();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEjercito_Producto_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AEjercito_Producto
void AEjercito_Producto::StaticRegisterNativesAEjercito_Producto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEjercito_Producto);
UClass* Z_Construct_UClass_AEjercito_Producto_NoRegister()
{
	return AEjercito_Producto::StaticClass();
}
struct Z_Construct_UClass_AEjercito_Producto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "2do_Parcial/2P_Builder/Ejercito_Producto.h" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Builder/Ejercito_Producto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemigos_MetaData[] = {
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Builder/Ejercito_Producto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemigos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemigos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEjercito_Producto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEjercito_Producto_Statics::NewProp_Enemigos_Inner = { "Enemigos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEjercito_Producto_Statics::NewProp_Enemigos = { "Enemigos", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEjercito_Producto, Enemigos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemigos_MetaData), NewProp_Enemigos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEjercito_Producto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEjercito_Producto_Statics::NewProp_Enemigos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEjercito_Producto_Statics::NewProp_Enemigos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEjercito_Producto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEjercito_Producto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEjercito_Producto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEjercito_Producto_Statics::ClassParams = {
	&AEjercito_Producto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEjercito_Producto_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEjercito_Producto_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEjercito_Producto_Statics::Class_MetaDataParams), Z_Construct_UClass_AEjercito_Producto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEjercito_Producto()
{
	if (!Z_Registration_Info_UClass_AEjercito_Producto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEjercito_Producto.OuterSingleton, Z_Construct_UClass_AEjercito_Producto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEjercito_Producto.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEjercito_Producto>()
{
	return AEjercito_Producto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEjercito_Producto);
AEjercito_Producto::~AEjercito_Producto() {}
// End Class AEjercito_Producto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Ejercito_Producto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEjercito_Producto, AEjercito_Producto::StaticClass, TEXT("AEjercito_Producto"), &Z_Registration_Info_UClass_AEjercito_Producto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEjercito_Producto), 3203802988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Ejercito_Producto_h_1156151340(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Ejercito_Producto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Ejercito_Producto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
