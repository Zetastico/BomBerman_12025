// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Bloques/Bloque_Puerta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Puerta() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Puerta();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Puerta_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBase();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABloque_Puerta
void ABloque_Puerta::StaticRegisterNativesABloque_Puerta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Puerta);
UClass* Z_Construct_UClass_ABloque_Puerta_NoRegister()
{
	return ABloque_Puerta::StaticClass();
}
struct Z_Construct_UClass_ABloque_Puerta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Bloques/Bloque_Puerta.h" },
		{ "ModuleRelativePath", "Public/Bloques/Bloque_Puerta.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionTime_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "Public/Bloques/Bloque_Puerta.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructionTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Puerta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Puerta_Statics::NewProp_DestructionTime = { "DestructionTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque_Puerta, DestructionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionTime_MetaData), NewProp_DestructionTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_Puerta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Puerta_Statics::NewProp_DestructionTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Puerta_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloque_Puerta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Puerta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Puerta_Statics::ClassParams = {
	&ABloque_Puerta::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloque_Puerta_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Puerta_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Puerta_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Puerta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Puerta()
{
	if (!Z_Registration_Info_UClass_ABloque_Puerta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Puerta.OuterSingleton, Z_Construct_UClass_ABloque_Puerta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Puerta.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque_Puerta>()
{
	return ABloque_Puerta::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Puerta);
ABloque_Puerta::~ABloque_Puerta() {}
// End Class ABloque_Puerta

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Puerta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Puerta, ABloque_Puerta::StaticClass, TEXT("ABloque_Puerta"), &Z_Registration_Info_UClass_ABloque_Puerta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Puerta), 2802496143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Puerta_h_1147457964(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Puerta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Puerta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
