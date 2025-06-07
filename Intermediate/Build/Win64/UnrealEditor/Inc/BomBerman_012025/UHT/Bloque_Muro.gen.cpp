// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Bloques/Bloque_Muro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Muro() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Muro();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Muro_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBase();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABloque_Muro
void ABloque_Muro::StaticRegisterNativesABloque_Muro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Muro);
UClass* Z_Construct_UClass_ABloque_Muro_NoRegister()
{
	return ABloque_Muro::StaticClass();
}
struct Z_Construct_UClass_ABloque_Muro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Bloques/Bloque_Muro.h" },
		{ "ModuleRelativePath", "Public/Bloques/Bloque_Muro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionTime_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "Public/Bloques/Bloque_Muro.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructionTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Muro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Muro_Statics::NewProp_DestructionTime = { "DestructionTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque_Muro, DestructionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionTime_MetaData), NewProp_DestructionTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_Muro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Muro_Statics::NewProp_DestructionTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Muro_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloque_Muro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Muro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Muro_Statics::ClassParams = {
	&ABloque_Muro::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloque_Muro_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Muro_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Muro_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Muro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Muro()
{
	if (!Z_Registration_Info_UClass_ABloque_Muro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Muro.OuterSingleton, Z_Construct_UClass_ABloque_Muro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Muro.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque_Muro>()
{
	return ABloque_Muro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Muro);
ABloque_Muro::~ABloque_Muro() {}
// End Class ABloque_Muro

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Muro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Muro, ABloque_Muro::StaticClass, TEXT("ABloque_Muro"), &Z_Registration_Info_UClass_ABloque_Muro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Muro), 3111564744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Muro_h_2957620945(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Muro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_Bloque_Muro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
