// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Builder/Builder_Main.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder_Main() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABuilder_Main();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABuilder_Main_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABuilder_Mapa_Bosque_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADirector_Builder_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_Factory_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABuilder_Main
void ABuilder_Main::StaticRegisterNativesABuilder_Main()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilder_Main);
UClass* Z_Construct_UClass_ABuilder_Main_NoRegister()
{
	return ABuilder_Main::StaticClass();
}
struct Z_Construct_UClass_ABuilder_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder/Builder_Main.h" },
		{ "ModuleRelativePath", "Public/Builder/Builder_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorBuilder_MetaData[] = {
		{ "Category", "Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Crea el director de nuestro builder\n" },
#endif
		{ "ModuleRelativePath", "Public/Builder/Builder_Main.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crea el director de nuestro builder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderMapaBosque_MetaData[] = {
		{ "Category", "Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Crea el builder especifico para el mapa de bosque\n" },
#endif
		{ "ModuleRelativePath", "Public/Builder/Builder_Main.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crea el builder especifico para el mapa de bosque" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FabricaEnemigo_MetaData[] = {
		{ "Category", "Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Crea el factory que se encargara de crear los enemigos\n" },
#endif
		{ "ModuleRelativePath", "Public/Builder/Builder_Main.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crea el factory que se encargara de crear los enemigos" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorBuilder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuilderMapaBosque;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FabricaEnemigo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilder_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Main_Statics::NewProp_DirectorBuilder = { "DirectorBuilder", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Main, DirectorBuilder), Z_Construct_UClass_ADirector_Builder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorBuilder_MetaData), NewProp_DirectorBuilder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Main_Statics::NewProp_BuilderMapaBosque = { "BuilderMapaBosque", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Main, BuilderMapaBosque), Z_Construct_UClass_ABuilder_Mapa_Bosque_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderMapaBosque_MetaData), NewProp_BuilderMapaBosque_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Main_Statics::NewProp_FabricaEnemigo = { "FabricaEnemigo", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Main, FabricaEnemigo), Z_Construct_UClass_AEnemigo_Factory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FabricaEnemigo_MetaData), NewProp_FabricaEnemigo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilder_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Main_Statics::NewProp_DirectorBuilder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Main_Statics::NewProp_BuilderMapaBosque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Main_Statics::NewProp_FabricaEnemigo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Main_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABuilder_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilder_Main_Statics::ClassParams = {
	&ABuilder_Main::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABuilder_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Main_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilder_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuilder_Main()
{
	if (!Z_Registration_Info_UClass_ABuilder_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilder_Main.OuterSingleton, Z_Construct_UClass_ABuilder_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuilder_Main.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABuilder_Main>()
{
	return ABuilder_Main::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilder_Main);
ABuilder_Main::~ABuilder_Main() {}
// End Class ABuilder_Main

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Main_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuilder_Main, ABuilder_Main::StaticClass, TEXT("ABuilder_Main"), &Z_Registration_Info_UClass_ABuilder_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilder_Main), 3096669124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Main_h_2052398610(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Main_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Builder_Builder_Main_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
