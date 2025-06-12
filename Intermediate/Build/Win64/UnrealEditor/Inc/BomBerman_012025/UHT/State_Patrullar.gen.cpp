// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/State/State_Patrullar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeState_Patrullar() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_State_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AState_Patrullar();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AState_Patrullar_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AState_Patrullar
void AState_Patrullar::StaticRegisterNativesAState_Patrullar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AState_Patrullar);
UClass* Z_Construct_UClass_AState_Patrullar_NoRegister()
{
	return AState_Patrullar::StaticClass();
}
struct Z_Construct_UClass_AState_Patrullar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "State/State_Patrullar.h" },
		{ "ModuleRelativePath", "Public/State/State_Patrullar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemigoState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//El enemigo al que pertenece este estado\n" },
#endif
		{ "ModuleRelativePath", "Public/State/State_Patrullar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "El enemigo al que pertenece este estado" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemigoState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AState_Patrullar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AState_Patrullar_Statics::NewProp_EnemigoState = { "EnemigoState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AState_Patrullar, EnemigoState), Z_Construct_UClass_AEnemigo_State_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemigoState_MetaData), NewProp_EnemigoState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AState_Patrullar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AState_Patrullar_Statics::NewProp_EnemigoState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AState_Patrullar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AState_Patrullar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AState_Patrullar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AState_Patrullar_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(AState_Patrullar, IState), false },  // 1428897341
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AState_Patrullar_Statics::ClassParams = {
	&AState_Patrullar::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AState_Patrullar_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AState_Patrullar_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AState_Patrullar_Statics::Class_MetaDataParams), Z_Construct_UClass_AState_Patrullar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AState_Patrullar()
{
	if (!Z_Registration_Info_UClass_AState_Patrullar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AState_Patrullar.OuterSingleton, Z_Construct_UClass_AState_Patrullar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AState_Patrullar.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AState_Patrullar>()
{
	return AState_Patrullar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AState_Patrullar);
AState_Patrullar::~AState_Patrullar() {}
// End Class AState_Patrullar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_State_Patrullar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AState_Patrullar, AState_Patrullar::StaticClass, TEXT("AState_Patrullar"), &Z_Registration_Info_UClass_AState_Patrullar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AState_Patrullar), 2243805363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_State_Patrullar_h_1365443218(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_State_Patrullar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_State_Patrullar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
