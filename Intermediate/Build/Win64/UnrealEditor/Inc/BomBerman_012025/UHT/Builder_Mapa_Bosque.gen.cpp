// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Builder/Builder_Mapa_Bosque.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder_Mapa_Bosque() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABuilder_Mapa_Bosque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABuilder_Mapa_Bosque_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapa_Factory_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapa_Producto_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBuilder_Mapa_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABuilder_Mapa_Bosque
void ABuilder_Mapa_Bosque::StaticRegisterNativesABuilder_Mapa_Bosque()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilder_Mapa_Bosque);
UClass* Z_Construct_UClass_ABuilder_Mapa_Bosque_NoRegister()
{
	return ABuilder_Mapa_Bosque::StaticClass();
}
struct Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder/Builder_Mapa_Bosque.h" },
		{ "ModuleRelativePath", "Public/Builder/Builder_Mapa_Bosque.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapaConstruido_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builder/Builder_Mapa_Bosque.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fabrica_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builder/Builder_Mapa_Bosque.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapaConstruido;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fabrica;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilder_Mapa_Bosque>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::NewProp_MapaConstruido = { "MapaConstruido", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Mapa_Bosque, MapaConstruido), Z_Construct_UClass_AMapa_Producto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapaConstruido_MetaData), NewProp_MapaConstruido_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::NewProp_Fabrica = { "Fabrica", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Mapa_Bosque, Fabrica), Z_Construct_UClass_AMapa_Factory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fabrica_MetaData), NewProp_Fabrica_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::NewProp_MapaConstruido,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::NewProp_Fabrica,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBuilder_Mapa_NoRegister, (int32)VTABLE_OFFSET(ABuilder_Mapa_Bosque, IBuilder_Mapa), false },  // 3950541387
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::ClassParams = {
	&ABuilder_Mapa_Bosque::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuilder_Mapa_Bosque()
{
	if (!Z_Registration_Info_UClass_ABuilder_Mapa_Bosque.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilder_Mapa_Bosque.OuterSingleton, Z_Construct_UClass_ABuilder_Mapa_Bosque_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuilder_Mapa_Bosque.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABuilder_Mapa_Bosque>()
{
	return ABuilder_Mapa_Bosque::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilder_Mapa_Bosque);
ABuilder_Mapa_Bosque::~ABuilder_Mapa_Bosque() {}
// End Class ABuilder_Mapa_Bosque

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Mapa_Bosque_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuilder_Mapa_Bosque, ABuilder_Mapa_Bosque::StaticClass, TEXT("ABuilder_Mapa_Bosque"), &Z_Registration_Info_UClass_ABuilder_Mapa_Bosque, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilder_Mapa_Bosque), 2042652965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Mapa_Bosque_h_1548427145(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Mapa_Bosque_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Mapa_Bosque_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
