// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Observer/Enemigo_Observer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo_Observer() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Trampa_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_Observer();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_Observer_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_USuscriptor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AEnemigo_Observer Function ActivarExplosion
struct Z_Construct_UFunction_AEnemigo_Observer_ActivarExplosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Observer/Enemigo_Observer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_Observer_ActivarExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo_Observer, nullptr, "ActivarExplosion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_Observer_ActivarExplosion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_Observer_ActivarExplosion_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemigo_Observer_ActivarExplosion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_Observer_ActivarExplosion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo_Observer::execActivarExplosion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivarExplosion();
	P_NATIVE_END;
}
// End Class AEnemigo_Observer Function ActivarExplosion

// Begin Class AEnemigo_Observer
void AEnemigo_Observer::StaticRegisterNativesAEnemigo_Observer()
{
	UClass* Class = AEnemigo_Observer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivarExplosion", &AEnemigo_Observer::execActivarExplosion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigo_Observer);
UClass* Z_Construct_UClass_AEnemigo_Observer_NoRegister()
{
	return AEnemigo_Observer::StaticClass();
}
struct Z_Construct_UClass_AEnemigo_Observer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Observer/Enemigo_Observer.h" },
		{ "ModuleRelativePath", "Public/Observer/Enemigo_Observer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueTrampa_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Clock Tower of this Subscriber\n" },
#endif
		{ "ModuleRelativePath", "Public/Observer/Enemigo_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Clock Tower of this Subscriber" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Malla_MetaData[] = {
		{ "Category", "Enemigo_Observer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Malla est\xef\xbf\xbdtica del cubo\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Observer/Enemigo_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Malla est\xef\xbf\xbdtica del cubo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PuntosDePatrulla_MetaData[] = {
		{ "Category", "Patrullaje" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Patrullaje\n" },
#endif
		{ "ModuleRelativePath", "Public/Observer/Enemigo_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Patrullaje" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoEspera_MetaData[] = {
		{ "Category", "Patrullaje" },
		{ "ModuleRelativePath", "Public/Observer/Enemigo_Observer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoParaExplotar_MetaData[] = {
		{ "Category", "Enemigo_Observer" },
		{ "ModuleRelativePath", "Public/Observer/Enemigo_Observer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangoExplosion_MetaData[] = {
		{ "Category", "Enemigo_Observer" },
		{ "ModuleRelativePath", "Public/Observer/Enemigo_Observer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EfectoExplosion_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Observer/Enemigo_Observer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloqueTrampa;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Malla;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PuntosDePatrulla_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PuntosDePatrulla;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoEspera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoParaExplotar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangoExplosion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EfectoExplosion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemigo_Observer_ActivarExplosion, "ActivarExplosion" }, // 3230696016
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo_Observer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_BloqueTrampa = { "BloqueTrampa", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo_Observer, BloqueTrampa), Z_Construct_UClass_ABloque_Trampa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueTrampa_MetaData), NewProp_BloqueTrampa_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_Malla = { "Malla", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo_Observer, Malla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Malla_MetaData), NewProp_Malla_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_PuntosDePatrulla_Inner = { "PuntosDePatrulla", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_PuntosDePatrulla = { "PuntosDePatrulla", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo_Observer, PuntosDePatrulla), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PuntosDePatrulla_MetaData), NewProp_PuntosDePatrulla_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_TiempoEspera = { "TiempoEspera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo_Observer, TiempoEspera), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoEspera_MetaData), NewProp_TiempoEspera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_TiempoParaExplotar = { "TiempoParaExplotar", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo_Observer, TiempoParaExplotar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoParaExplotar_MetaData), NewProp_TiempoParaExplotar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_RangoExplosion = { "RangoExplosion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo_Observer, RangoExplosion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangoExplosion_MetaData), NewProp_RangoExplosion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_EfectoExplosion = { "EfectoExplosion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo_Observer, EfectoExplosion), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EfectoExplosion_MetaData), NewProp_EfectoExplosion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo_Observer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_BloqueTrampa,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_Malla,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_PuntosDePatrulla_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_PuntosDePatrulla,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_TiempoEspera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_TiempoParaExplotar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_RangoExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Observer_Statics::NewProp_EfectoExplosion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Observer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigo_Observer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Observer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigo_Observer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USuscriptor_NoRegister, (int32)VTABLE_OFFSET(AEnemigo_Observer, ISuscriptor), false },  // 731658279
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Observer_Statics::ClassParams = {
	&AEnemigo_Observer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemigo_Observer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Observer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Observer_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigo_Observer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigo_Observer()
{
	if (!Z_Registration_Info_UClass_AEnemigo_Observer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigo_Observer.OuterSingleton, Z_Construct_UClass_AEnemigo_Observer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigo_Observer.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigo_Observer>()
{
	return AEnemigo_Observer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo_Observer);
AEnemigo_Observer::~AEnemigo_Observer() {}
// End Class AEnemigo_Observer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigo_Observer, AEnemigo_Observer::StaticClass, TEXT("AEnemigo_Observer"), &Z_Registration_Info_UClass_AEnemigo_Observer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo_Observer), 4153339137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_656196507(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
