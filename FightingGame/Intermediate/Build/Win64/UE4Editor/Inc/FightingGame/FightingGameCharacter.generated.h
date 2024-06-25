// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIGHTINGGAME_FightingGameCharacter_generated_h
#error "FightingGameCharacter.generated.h already included, missing '#pragma once' in FightingGameCharacter.h"
#endif
#define FIGHTINGGAME_FightingGameCharacter_generated_h

#define FightingGame_Source_FightingGame_FightingGameCharacter_h_12_SPARSE_DATA
#define FightingGame_Source_FightingGame_FightingGameCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define FightingGame_Source_FightingGame_FightingGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define FightingGame_Source_FightingGame_FightingGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFightingGameCharacter(); \
	friend struct Z_Construct_UClass_AFightingGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFightingGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(AFightingGameCharacter)


#define FightingGame_Source_FightingGame_FightingGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFightingGameCharacter(); \
	friend struct Z_Construct_UClass_AFightingGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFightingGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(AFightingGameCharacter)


#define FightingGame_Source_FightingGame_FightingGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFightingGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFightingGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFightingGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFightingGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFightingGameCharacter(AFightingGameCharacter&&); \
	NO_API AFightingGameCharacter(const AFightingGameCharacter&); \
public:


#define FightingGame_Source_FightingGame_FightingGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFightingGameCharacter(AFightingGameCharacter&&); \
	NO_API AFightingGameCharacter(const AFightingGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFightingGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFightingGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFightingGameCharacter)


#define FightingGame_Source_FightingGame_FightingGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AFightingGameCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFightingGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__playerHealth() { return STRUCT_OFFSET(AFightingGameCharacter, playerHealth); } \
	FORCEINLINE static uint32 __PPO__wasFirstAttackUsed() { return STRUCT_OFFSET(AFightingGameCharacter, wasFirstAttackUsed); }


#define FightingGame_Source_FightingGame_FightingGameCharacter_h_9_PROLOG
#define FightingGame_Source_FightingGame_FightingGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_FightingGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_FightingGameCharacter_h_12_SPARSE_DATA \
	FightingGame_Source_FightingGame_FightingGameCharacter_h_12_RPC_WRAPPERS \
	FightingGame_Source_FightingGame_FightingGameCharacter_h_12_INCLASS \
	FightingGame_Source_FightingGame_FightingGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightingGame_Source_FightingGame_FightingGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_FightingGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_FightingGameCharacter_h_12_SPARSE_DATA \
	FightingGame_Source_FightingGame_FightingGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_FightingGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_FightingGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIGHTINGGAME_API UClass* StaticClass<class AFightingGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightingGame_Source_FightingGame_FightingGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
