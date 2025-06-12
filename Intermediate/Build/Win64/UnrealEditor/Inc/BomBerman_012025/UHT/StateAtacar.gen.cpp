// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/State/StateAtacar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateAtacar() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_State_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AStateAtacar();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AStateAtacar_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class AStateAtacar
void AStateAtacar::StaticRegisterNativesAStateAtacar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStateAtacar);
UClass* Z_Construct_UClass_AStateAtacar_NoRegister()
{
	return AStateAtacar::StaticClass();
}
struct Z_Construct_UClass_AStateAtacar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "State/StateAtacar.h" },
		{ "ModuleRelativePath", "Public/State/StateAtacar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemigoState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//El enemigo al que pertenece este estado\n" },
#endif
		{ "ModuleRelativePath", "Public/State/StateAtacar.h" },
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
		TCppClassTypeTraits<AStateAtacar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStateAtacar_Statics::NewProp_EnemigoState = { "EnemigoState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStateAtacar, EnemigoState), Z_Construct_UClass_AEnemigo_State_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemigoState_MetaData), NewProp_EnemigoState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStateAtacar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStateAtacar_Statics::NewProp_EnemigoState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStateAtacar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStateAtacar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStateAtacar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStateAtacar_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(AStateAtacar, IState), false },  // 1428897341
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStateAtacar_Statics::ClassParams = {
	&AStateAtacar::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AStateAtacar_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AStateAtacar_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStateAtacar_Statics::Class_MetaDataParams), Z_Construct_UClass_AStateAtacar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStateAtacar()
{
	if (!Z_Registration_Info_UClass_AStateAtacar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStateAtacar.OuterSingleton, Z_Construct_UClass_AStateAtacar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStateAtacar.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AStateAtacar>()
{
	return AStateAtacar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStateAtacar);
AStateAtacar::~AStateAtacar() {}
// End Class AStateAtacar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_StateAtacar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStateAtacar, AStateAtacar::StaticClass, TEXT("AStateAtacar"), &Z_Registration_Info_UClass_AStateAtacar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStateAtacar), 3794742390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_StateAtacar_h_3991026023(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_StateAtacar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_StateAtacar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
