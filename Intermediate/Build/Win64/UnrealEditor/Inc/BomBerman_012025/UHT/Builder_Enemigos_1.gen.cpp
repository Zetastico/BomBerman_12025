// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/2do_Parcial/2P_Builder/Builder_Enemigos_1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder_Enemigos_1() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABuilder_Enemigos_1();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABuilder_Enemigos_1_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_Factory_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBuilder_Enemigos_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABuilder_Enemigos_1
void ABuilder_Enemigos_1::StaticRegisterNativesABuilder_Enemigos_1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilder_Enemigos_1);
UClass* Z_Construct_UClass_ABuilder_Enemigos_1_NoRegister()
{
	return ABuilder_Enemigos_1::StaticClass();
}
struct Z_Construct_UClass_ABuilder_Enemigos_1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "2do_Parcial/2P_Builder/Builder_Enemigos_1.h" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Builder/Builder_Enemigos_1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fabrica_MetaData[] = {
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Builder/Builder_Enemigos_1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fabrica;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilder_Enemigos_1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Enemigos_1_Statics::NewProp_Fabrica = { "Fabrica", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Enemigos_1, Fabrica), Z_Construct_UClass_AEnemigo_Factory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fabrica_MetaData), NewProp_Fabrica_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilder_Enemigos_1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Enemigos_1_Statics::NewProp_Fabrica,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Enemigos_1_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABuilder_Enemigos_1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Enemigos_1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilder_Enemigos_1_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBuilder_Enemigos_NoRegister, (int32)VTABLE_OFFSET(ABuilder_Enemigos_1, IBuilder_Enemigos), false },  // 1670874435
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilder_Enemigos_1_Statics::ClassParams = {
	&ABuilder_Enemigos_1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABuilder_Enemigos_1_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Enemigos_1_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Enemigos_1_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilder_Enemigos_1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuilder_Enemigos_1()
{
	if (!Z_Registration_Info_UClass_ABuilder_Enemigos_1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilder_Enemigos_1.OuterSingleton, Z_Construct_UClass_ABuilder_Enemigos_1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuilder_Enemigos_1.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABuilder_Enemigos_1>()
{
	return ABuilder_Enemigos_1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilder_Enemigos_1);
ABuilder_Enemigos_1::~ABuilder_Enemigos_1() {}
// End Class ABuilder_Enemigos_1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuilder_Enemigos_1, ABuilder_Enemigos_1::StaticClass, TEXT("ABuilder_Enemigos_1"), &Z_Registration_Info_UClass_ABuilder_Enemigos_1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilder_Enemigos_1), 3822203442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_1_h_1103297154(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
