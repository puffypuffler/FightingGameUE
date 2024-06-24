// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIGHTINGGAME_HitboxActor_generated_h
#error "HitboxActor.generated.h already included, missing '#pragma once' in HitboxActor.h"
#endif
#define FIGHTINGGAME_HitboxActor_generated_h

#define FightingGame_Source_FightingGame_HitboxActor_h_20_SPARSE_DATA
#define FightingGame_Source_FightingGame_HitboxActor_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerVisualizeHitBox);


#define FightingGame_Source_FightingGame_HitboxActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerVisualizeHitBox);


#define FightingGame_Source_FightingGame_HitboxActor_h_20_EVENT_PARMS
#define FightingGame_Source_FightingGame_HitboxActor_h_20_CALLBACK_WRAPPERS
#define FightingGame_Source_FightingGame_HitboxActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitboxActor(); \
	friend struct Z_Construct_UClass_AHitboxActor_Statics; \
public: \
	DECLARE_CLASS(AHitboxActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(AHitboxActor)


#define FightingGame_Source_FightingGame_HitboxActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAHitboxActor(); \
	friend struct Z_Construct_UClass_AHitboxActor_Statics; \
public: \
	DECLARE_CLASS(AHitboxActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FightingGame"), NO_API) \
	DECLARE_SERIALIZER(AHitboxActor)


#define FightingGame_Source_FightingGame_HitboxActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHitboxActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHitboxActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitboxActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitboxActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitboxActor(AHitboxActor&&); \
	NO_API AHitboxActor(const AHitboxActor&); \
public:


#define FightingGame_Source_FightingGame_HitboxActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitboxActor(AHitboxActor&&); \
	NO_API AHitboxActor(const AHitboxActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitboxActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitboxActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHitboxActor)


#define FightingGame_Source_FightingGame_HitboxActor_h_20_PRIVATE_PROPERTY_OFFSET
#define FightingGame_Source_FightingGame_HitboxActor_h_17_PROLOG \
	FightingGame_Source_FightingGame_HitboxActor_h_20_EVENT_PARMS


#define FightingGame_Source_FightingGame_HitboxActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_HitboxActor_h_20_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_HitboxActor_h_20_SPARSE_DATA \
	FightingGame_Source_FightingGame_HitboxActor_h_20_RPC_WRAPPERS \
	FightingGame_Source_FightingGame_HitboxActor_h_20_CALLBACK_WRAPPERS \
	FightingGame_Source_FightingGame_HitboxActor_h_20_INCLASS \
	FightingGame_Source_FightingGame_HitboxActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightingGame_Source_FightingGame_HitboxActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingGame_Source_FightingGame_HitboxActor_h_20_PRIVATE_PROPERTY_OFFSET \
	FightingGame_Source_FightingGame_HitboxActor_h_20_SPARSE_DATA \
	FightingGame_Source_FightingGame_HitboxActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_HitboxActor_h_20_CALLBACK_WRAPPERS \
	FightingGame_Source_FightingGame_HitboxActor_h_20_INCLASS_NO_PURE_DECLS \
	FightingGame_Source_FightingGame_HitboxActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIGHTINGGAME_API UClass* StaticClass<class AHitboxActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightingGame_Source_FightingGame_HitboxActor_h


#define FOREACH_ENUM_EHITBOXENUM(op) \
	op(EHitboxEnum::HB_PROXIMITY) \
	op(EHitboxEnum::HB_STRIKE) \
	op(EHitboxEnum::HB_HURTBOX) 

enum class EHitboxEnum : uint8;
template<> FIGHTINGGAME_API UEnum* StaticEnum<EHitboxEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS