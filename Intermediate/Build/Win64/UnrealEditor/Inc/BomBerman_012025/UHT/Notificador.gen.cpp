// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Observer/Notificador.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotificador() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ANotificador();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ANotificador_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ANotificador
void ANotificador::StaticRegisterNativesANotificador()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANotificador);
UClass* Z_Construct_UClass_ANotificador_NoRegister()
{
	return ANotificador::StaticClass();
}
struct Z_Construct_UClass_ANotificador_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Observer/Notificador.h" },
		{ "ModuleRelativePath", "Public/Observer/Notificador.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subscribers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Subscribers of this Publisher\n" },
#endif
		{ "ModuleRelativePath", "Public/Observer/Notificador.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Subscribers of this Publisher" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subscribers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subscribers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANotificador>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANotificador_Statics::NewProp_Subscribers_Inner = { "Subscribers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANotificador_Statics::NewProp_Subscribers = { "Subscribers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANotificador, Subscribers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subscribers_MetaData), NewProp_Subscribers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANotificador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANotificador_Statics::NewProp_Subscribers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANotificador_Statics::NewProp_Subscribers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANotificador_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANotificador_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANotificador_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANotificador_Statics::ClassParams = {
	&ANotificador::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANotificador_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANotificador_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANotificador_Statics::Class_MetaDataParams), Z_Construct_UClass_ANotificador_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANotificador()
{
	if (!Z_Registration_Info_UClass_ANotificador.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANotificador.OuterSingleton, Z_Construct_UClass_ANotificador_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANotificador.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ANotificador>()
{
	return ANotificador::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANotificador);
ANotificador::~ANotificador() {}
// End Class ANotificador

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Notificador_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANotificador, ANotificador::StaticClass, TEXT("ANotificador"), &Z_Registration_Info_UClass_ANotificador, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANotificador), 3514341925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Notificador_h_3473197927(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Notificador_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Notificador_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
