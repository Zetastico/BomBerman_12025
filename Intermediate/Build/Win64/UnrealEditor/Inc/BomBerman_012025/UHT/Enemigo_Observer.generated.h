// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Observer/Enemigo_Observer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_012025_Enemigo_Observer_generated_h
#error "Enemigo_Observer.generated.h already included, missing '#pragma once' in Enemigo_Observer.h"
#endif
#define BOMBERMAN_012025_Enemigo_Observer_generated_h

#define FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActivarExplosion);


#define FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo_Observer(); \
	friend struct Z_Construct_UClass_AEnemigo_Observer_Statics; \
public: \
	DECLARE_CLASS(AEnemigo_Observer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomBerman_012025"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo_Observer) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemigo_Observer*>(this); }


#define FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemigo_Observer(AEnemigo_Observer&&); \
	AEnemigo_Observer(const AEnemigo_Observer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo_Observer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo_Observer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo_Observer) \
	NO_API virtual ~AEnemigo_Observer();


#define FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_9_PROLOG
#define FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class AEnemigo_Observer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_Observer_Enemigo_Observer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
