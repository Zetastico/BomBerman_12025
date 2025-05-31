// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Enemigos/Enemigo_Bomb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo_Bomb() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_Bomb();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_Bomb_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AEnemigo_Bomb Function ActivarExplosion
struct Z_Construct_UFunction_AEnemigo_Bomb_ActivarExplosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemigos/Enemigo_Bomb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_Bomb_ActivarExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo_Bomb, nullptr, "ActivarExplosion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_Bomb_ActivarExplosion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_Bomb_ActivarExplosion_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemigo_Bomb_ActivarExplosion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_Bomb_ActivarExplosion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo_Bomb::execActivarExplosion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivarExplosion();
	P_NATIVE_END;
}
// End Class AEnemigo_Bomb Function ActivarExplosion

// Begin Class AEnemigo_Bomb
void AEnemigo_Bomb::StaticRegisterNativesAEnemigo_Bomb()
{
	UClass* Class = AEnemigo_Bomb::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivarExplosion", &AEnemigo_Bomb::execActivarExplosion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigo_Bomb);
UClass* Z_Construct_UClass_AEnemigo_Bomb_NoRegister()
{
	return AEnemigo_Bomb::StaticClass();
}
struct Z_Construct_UClass_AEnemigo_Bomb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemigos/Enemigo_Bomb.h" },
		{ "ModuleRelativePath", "Public/Enemigos/Enemigo_Bomb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoParaExplotar_MetaData[] = {
		{ "Category", "Enemigo_Bomb" },
		{ "ModuleRelativePath", "Public/Enemigos/Enemigo_Bomb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangoExplosion_MetaData[] = {
		{ "Category", "Enemigo_Bomb" },
		{ "ModuleRelativePath", "Public/Enemigos/Enemigo_Bomb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EfectoExplosion_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Enemigos/Enemigo_Bomb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoParaExplotar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangoExplosion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EfectoExplosion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemigo_Bomb_ActivarExplosion, "ActivarExplosion" }, // 822448245
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo_Bomb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Bomb_Statics::NewProp_TiempoParaExplotar = { "TiempoParaExplotar", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo_Bomb, TiempoParaExplotar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoParaExplotar_MetaData), NewProp_TiempoParaExplotar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Bomb_Statics::NewProp_RangoExplosion = { "RangoExplosion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo_Bomb, RangoExplosion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangoExplosion_MetaData), NewProp_RangoExplosion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Bomb_Statics::NewProp_EfectoExplosion = { "EfectoExplosion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo_Bomb, EfectoExplosion), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EfectoExplosion_MetaData), NewProp_EfectoExplosion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo_Bomb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Bomb_Statics::NewProp_TiempoParaExplotar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Bomb_Statics::NewProp_RangoExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Bomb_Statics::NewProp_EfectoExplosion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Bomb_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigo_Bomb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Bomb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Bomb_Statics::ClassParams = {
	&AEnemigo_Bomb::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemigo_Bomb_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Bomb_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Bomb_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigo_Bomb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigo_Bomb()
{
	if (!Z_Registration_Info_UClass_AEnemigo_Bomb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigo_Bomb.OuterSingleton, Z_Construct_UClass_AEnemigo_Bomb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigo_Bomb.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigo_Bomb>()
{
	return AEnemigo_Bomb::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo_Bomb);
AEnemigo_Bomb::~AEnemigo_Bomb() {}
// End Class AEnemigo_Bomb

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Enemigos_Enemigo_Bomb_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigo_Bomb, AEnemigo_Bomb::StaticClass, TEXT("AEnemigo_Bomb"), &Z_Registration_Info_UClass_AEnemigo_Bomb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo_Bomb), 970893329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Enemigos_Enemigo_Bomb_h_288496200(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Enemigos_Enemigo_Bomb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Enemigos_Enemigo_Bomb_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
