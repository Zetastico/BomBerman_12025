// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "State/Enemigo_State.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BOMBERMAN_012025_Enemigo_State_generated_h
#error "Enemigo_State.generated.h already included, missing '#pragma once' in Enemigo_State.h"
#endif
#define BOMBERMAN_012025_Enemigo_State_generated_h

#define FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_Enemigo_State_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapJugador);


#define FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_Enemigo_State_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo_State(); \
	friend struct Z_Construct_UClass_AEnemigo_State_Statics; \
public: \
	DECLARE_CLASS(AEnemigo_State, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomBerman_012025"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo_State)


#define FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_Enemigo_State_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemigo_State(AEnemigo_State&&); \
	AEnemigo_State(const AEnemigo_State&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo_State); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo_State); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo_State) \
	NO_API virtual ~AEnemigo_State();


#define FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_Enemigo_State_h_9_PROLOG
#define FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_Enemigo_State_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_Enemigo_State_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_Enemigo_State_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_Enemigo_State_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class AEnemigo_State>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Magne_Documents_Unreal_Projects_BomBerman_012025_Source_BomBerman_012025_Public_State_Enemigo_State_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
