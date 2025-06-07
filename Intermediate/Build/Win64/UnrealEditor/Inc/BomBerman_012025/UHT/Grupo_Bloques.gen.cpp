// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Composite/Grupo_Bloques.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrupo_Bloques() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Base_Composite();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Base_Composite_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AGrupo_Bloques();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AGrupo_Bloques_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AGrupo_Bloques Function AgregarBloque
struct Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics
{
	struct Grupo_Bloques_eventAgregarBloque_Parms
	{
		ABloque_Base_Composite* Bloque;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grupo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//M\xef\xbf\xbdtodo para agregar un bloque al grupo\n" },
#endif
		{ "ModuleRelativePath", "Public/Composite/Grupo_Bloques.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo para agregar un bloque al grupo" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bloque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::NewProp_Bloque = { "Bloque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grupo_Bloques_eventAgregarBloque_Parms, Bloque), Z_Construct_UClass_ABloque_Base_Composite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::NewProp_Bloque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrupo_Bloques, nullptr, "AgregarBloque", nullptr, nullptr, Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::Grupo_Bloques_eventAgregarBloque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::Grupo_Bloques_eventAgregarBloque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrupo_Bloques::execAgregarBloque)
{
	P_GET_OBJECT(ABloque_Base_Composite,Z_Param_Bloque);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AgregarBloque(Z_Param_Bloque);
	P_NATIVE_END;
}
// End Class AGrupo_Bloques Function AgregarBloque

// Begin Class AGrupo_Bloques
void AGrupo_Bloques::StaticRegisterNativesAGrupo_Bloques()
{
	UClass* Class = AGrupo_Bloques::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AgregarBloque", &AGrupo_Bloques::execAgregarBloque },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrupo_Bloques);
UClass* Z_Construct_UClass_AGrupo_Bloques_NoRegister()
{
	return AGrupo_Bloques::StaticClass();
}
struct Z_Construct_UClass_AGrupo_Bloques_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Composite/Grupo_Bloques.h" },
		{ "ModuleRelativePath", "Public/Composite/Grupo_Bloques.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hijos_MetaData[] = {
		{ "Category", "Grupo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Bloques hijos que se afectan en cascada\n" },
#endif
		{ "ModuleRelativePath", "Public/Composite/Grupo_Bloques.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bloques hijos que se afectan en cascada" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hijos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hijos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrupo_Bloques_AgregarBloque, "AgregarBloque" }, // 1836530461
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrupo_Bloques>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrupo_Bloques_Statics::NewProp_Hijos_Inner = { "Hijos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloque_Base_Composite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGrupo_Bloques_Statics::NewProp_Hijos = { "Hijos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrupo_Bloques, Hijos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hijos_MetaData), NewProp_Hijos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrupo_Bloques_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrupo_Bloques_Statics::NewProp_Hijos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrupo_Bloques_Statics::NewProp_Hijos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrupo_Bloques_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGrupo_Bloques_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque_Base_Composite,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrupo_Bloques_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrupo_Bloques_Statics::ClassParams = {
	&AGrupo_Bloques::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGrupo_Bloques_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGrupo_Bloques_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrupo_Bloques_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrupo_Bloques_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrupo_Bloques()
{
	if (!Z_Registration_Info_UClass_AGrupo_Bloques.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrupo_Bloques.OuterSingleton, Z_Construct_UClass_AGrupo_Bloques_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrupo_Bloques.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AGrupo_Bloques>()
{
	return AGrupo_Bloques::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrupo_Bloques);
AGrupo_Bloques::~AGrupo_Bloques() {}
// End Class AGrupo_Bloques

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Grupo_Bloques_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGrupo_Bloques, AGrupo_Bloques::StaticClass, TEXT("AGrupo_Bloques"), &Z_Registration_Info_UClass_AGrupo_Bloques, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrupo_Bloques), 3804427989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Grupo_Bloques_h_2909538245(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Grupo_Bloques_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Grupo_Bloques_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
