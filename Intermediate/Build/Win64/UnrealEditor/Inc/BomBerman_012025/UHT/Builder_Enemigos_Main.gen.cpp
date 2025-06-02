// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/2do_Parcial/2P_Builder/Builder_Enemigos_Main.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder_Enemigos_Main() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABuilder_Enemigos_1_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABuilder_Enemigos_Main();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABuilder_Enemigos_Main_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADirector_Enemigos_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABuilder_Enemigos_Main
void ABuilder_Enemigos_Main::StaticRegisterNativesABuilder_Enemigos_Main()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilder_Enemigos_Main);
UClass* Z_Construct_UClass_ABuilder_Enemigos_Main_NoRegister()
{
	return ABuilder_Enemigos_Main::StaticClass();
}
struct Z_Construct_UClass_ABuilder_Enemigos_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "2do_Parcial/2P_Builder/Builder_Enemigos_Main.h" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Builder/Builder_Enemigos_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorBuilder_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Builder/Builder_Enemigos_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderEnemigos1_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Public/2do_Parcial/2P_Builder/Builder_Enemigos_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorBuilder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuilderEnemigos1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilder_Enemigos_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::NewProp_DirectorBuilder = { "DirectorBuilder", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Enemigos_Main, DirectorBuilder), Z_Construct_UClass_ADirector_Enemigos_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorBuilder_MetaData), NewProp_DirectorBuilder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::NewProp_BuilderEnemigos1 = { "BuilderEnemigos1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Enemigos_Main, BuilderEnemigos1), Z_Construct_UClass_ABuilder_Enemigos_1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderEnemigos1_MetaData), NewProp_BuilderEnemigos1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::NewProp_DirectorBuilder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::NewProp_BuilderEnemigos1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::ClassParams = {
	&ABuilder_Enemigos_Main::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuilder_Enemigos_Main()
{
	if (!Z_Registration_Info_UClass_ABuilder_Enemigos_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilder_Enemigos_Main.OuterSingleton, Z_Construct_UClass_ABuilder_Enemigos_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuilder_Enemigos_Main.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABuilder_Enemigos_Main>()
{
	return ABuilder_Enemigos_Main::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilder_Enemigos_Main);
ABuilder_Enemigos_Main::~ABuilder_Enemigos_Main() {}
// End Class ABuilder_Enemigos_Main

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_Main_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuilder_Enemigos_Main, ABuilder_Enemigos_Main::StaticClass, TEXT("ABuilder_Enemigos_Main"), &Z_Registration_Info_UClass_ABuilder_Enemigos_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilder_Enemigos_Main), 3640494842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_Main_h_3597121023(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_Main_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_2do_Parcial_2P_Builder_Builder_Enemigos_Main_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
