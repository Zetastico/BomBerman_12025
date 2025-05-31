// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomBerman_012025/Public/Nav_Mesh_Bounds_Volum/Navi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavi() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ANavi();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ANavi_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume();
UPackage* Z_Construct_UPackage__Script_BomBerman_012025();
// End Cross Module References

// Begin Class ANavi
void ANavi::StaticRegisterNativesANavi()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavi);
UClass* Z_Construct_UClass_ANavi_NoRegister()
{
	return ANavi::StaticClass();
}
struct Z_Construct_UClass_ANavi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Nav_Mesh_Bounds_Volum/Navi.h" },
		{ "ModuleRelativePath", "Public/Nav_Mesh_Bounds_Volum/Navi.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANavi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANavMeshBoundsVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_BomBerman_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavi_Statics::ClassParams = {
	&ANavi::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavi_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavi_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavi()
{
	if (!Z_Registration_Info_UClass_ANavi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavi.OuterSingleton, Z_Construct_UClass_ANavi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavi.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ANavi>()
{
	return ANavi::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavi);
ANavi::~ANavi() {}
// End Class ANavi

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Nav_Mesh_Bounds_Volum_Navi_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavi, ANavi::StaticClass, TEXT("ANavi"), &Z_Registration_Info_UClass_ANavi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavi), 4136231178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Nav_Mesh_Bounds_Volum_Navi_h_4257964605(TEXT("/Script/BomBerman_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Nav_Mesh_Bounds_Volum_Navi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Nav_Mesh_Bounds_Volum_Navi_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
