// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Bloques/BloqueTitilante.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueTitilante() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBase();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueTitilante();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueTitilante_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABloqueTitilante
void ABloqueTitilante::StaticRegisterNativesABloqueTitilante()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueTitilante);
UClass* Z_Construct_UClass_ABloqueTitilante_NoRegister()
{
	return ABloqueTitilante::StaticClass();
}
struct Z_Construct_UClass_ABloqueTitilante_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Bloques/BloqueTitilante.h" },
		{ "ModuleRelativePath", "Public/Bloques/BloqueTitilante.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoVisible_MetaData[] = {
		{ "Category", "BloqueTitilante" },
		{ "ModuleRelativePath", "Public/Bloques/BloqueTitilante.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoInvisible_MetaData[] = {
		{ "Category", "BloqueTitilante" },
		{ "ModuleRelativePath", "Public/Bloques/BloqueTitilante.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionTime_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "Public/Bloques/BloqueTitilante.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoVisible;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoInvisible;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructionTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueTitilante>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueTitilante_Statics::NewProp_TiempoVisible = { "TiempoVisible", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueTitilante, TiempoVisible), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoVisible_MetaData), NewProp_TiempoVisible_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueTitilante_Statics::NewProp_TiempoInvisible = { "TiempoInvisible", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueTitilante, TiempoInvisible), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoInvisible_MetaData), NewProp_TiempoInvisible_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueTitilante_Statics::NewProp_DestructionTime = { "DestructionTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueTitilante, DestructionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionTime_MetaData), NewProp_DestructionTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueTitilante_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueTitilante_Statics::NewProp_TiempoVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueTitilante_Statics::NewProp_TiempoInvisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueTitilante_Statics::NewProp_DestructionTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTitilante_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueTitilante_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTitilante_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueTitilante_Statics::ClassParams = {
	&ABloqueTitilante::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueTitilante_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTitilante_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTitilante_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueTitilante_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueTitilante()
{
	if (!Z_Registration_Info_UClass_ABloqueTitilante.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueTitilante.OuterSingleton, Z_Construct_UClass_ABloqueTitilante_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueTitilante.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueTitilante>()
{
	return ABloqueTitilante::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueTitilante);
ABloqueTitilante::~ABloqueTitilante() {}
// End Class ABloqueTitilante

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_BloqueTitilante_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueTitilante, ABloqueTitilante::StaticClass, TEXT("ABloqueTitilante"), &Z_Registration_Info_UClass_ABloqueTitilante, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueTitilante), 452088104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_BloqueTitilante_h_4132947371(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_BloqueTitilante_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Bloques_BloqueTitilante_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
