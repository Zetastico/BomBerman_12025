// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Composite/Bloque_Base_Composite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Base_Composite() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Base_Composite();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Base_Composite_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABloque_Base_Composite Function AfectarPorExplosion
struct Z_Construct_UFunction_ABloque_Base_Composite_AfectarPorExplosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Explosi\xef\xbf\xbdn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Metodo para afectar por explosi\xef\xbf\xbdn que aplicamos a los bloques concretos\n" },
#endif
		{ "ModuleRelativePath", "Public/Composite/Bloque_Base_Composite.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Metodo para afectar por explosi\xef\xbf\xbdn que aplicamos a los bloques concretos" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloque_Base_Composite_AfectarPorExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloque_Base_Composite, nullptr, "AfectarPorExplosion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloque_Base_Composite_AfectarPorExplosion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABloque_Base_Composite_AfectarPorExplosion_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABloque_Base_Composite_AfectarPorExplosion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABloque_Base_Composite_AfectarPorExplosion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABloque_Base_Composite::execAfectarPorExplosion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AfectarPorExplosion();
	P_NATIVE_END;
}
// End Class ABloque_Base_Composite Function AfectarPorExplosion

// Begin Class ABloque_Base_Composite
void ABloque_Base_Composite::StaticRegisterNativesABloque_Base_Composite()
{
	UClass* Class = ABloque_Base_Composite::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AfectarPorExplosion", &ABloque_Base_Composite::execAfectarPorExplosion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Base_Composite);
UClass* Z_Construct_UClass_ABloque_Base_Composite_NoRegister()
{
	return ABloque_Base_Composite::StaticClass();
}
struct Z_Construct_UClass_ABloque_Base_Composite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Composite/Bloque_Base_Composite.h" },
		{ "ModuleRelativePath", "Public/Composite/Bloque_Base_Composite.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloque_Base_Composite_AfectarPorExplosion, "AfectarPorExplosion" }, // 2947680531
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Base_Composite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Base_Composite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Base_Composite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Base_Composite_Statics::ClassParams = {
	&ABloque_Base_Composite::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Base_Composite_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Base_Composite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Base_Composite()
{
	if (!Z_Registration_Info_UClass_ABloque_Base_Composite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Base_Composite.OuterSingleton, Z_Construct_UClass_ABloque_Base_Composite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Base_Composite.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque_Base_Composite>()
{
	return ABloque_Base_Composite::StaticClass();
}
ABloque_Base_Composite::ABloque_Base_Composite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Base_Composite);
ABloque_Base_Composite::~ABloque_Base_Composite() {}
// End Class ABloque_Base_Composite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Bloque_Base_Composite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Base_Composite, ABloque_Base_Composite::StaticClass, TEXT("ABloque_Base_Composite"), &Z_Registration_Info_UClass_ABloque_Base_Composite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Base_Composite), 1571298784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Bloque_Base_Composite_h_2125448504(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Bloque_Base_Composite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Bloque_Base_Composite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
