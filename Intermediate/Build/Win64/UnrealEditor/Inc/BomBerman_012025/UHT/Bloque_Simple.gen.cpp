// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Composite/Bloque_Simple.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Simple() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Base_Composite();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Simple();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Simple_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ABloque_Simple
void ABloque_Simple::StaticRegisterNativesABloque_Simple()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Simple);
UClass* Z_Construct_UClass_ABloque_Simple_NoRegister()
{
	return ABloque_Simple::StaticClass();
}
struct Z_Construct_UClass_ABloque_Simple_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Composite/Bloque_Simple.h" },
		{ "ModuleRelativePath", "Public/Composite/Bloque_Simple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tipo_MetaData[] = {
		{ "Category", "Bloque" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tipo del bloque (S\xef\xbf\xbdlido o Destructible)\n//Depende si se rompera o no\n" },
#endif
		{ "ModuleRelativePath", "Public/Composite/Bloque_Simple.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tipo del bloque (S\xef\xbf\xbdlido o Destructible)\nDepende si se rompera o no" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tipo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Simple>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABloque_Simple_Statics::NewProp_Tipo = { "Tipo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque_Simple, Tipo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tipo_MetaData), NewProp_Tipo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_Simple_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Simple_Statics::NewProp_Tipo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Simple_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloque_Simple_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque_Base_Composite,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Simple_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Simple_Statics::ClassParams = {
	&ABloque_Simple::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloque_Simple_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Simple_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Simple_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Simple_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Simple()
{
	if (!Z_Registration_Info_UClass_ABloque_Simple.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Simple.OuterSingleton, Z_Construct_UClass_ABloque_Simple_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Simple.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque_Simple>()
{
	return ABloque_Simple::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Simple);
ABloque_Simple::~ABloque_Simple() {}
// End Class ABloque_Simple

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Bloque_Simple_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Simple, ABloque_Simple::StaticClass, TEXT("ABloque_Simple"), &Z_Registration_Info_UClass_ABloque_Simple, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Simple), 3951709161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Bloque_Simple_h_1756220211(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Bloque_Simple_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Composite_Bloque_Simple_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
