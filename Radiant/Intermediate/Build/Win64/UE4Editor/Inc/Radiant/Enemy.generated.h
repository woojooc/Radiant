// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RADIANT_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define RADIANT_Enemy_generated_h

#define Radiant_Source_Radiant_Public_Enemy_h_12_SPARSE_DATA
#define Radiant_Source_Radiant_Public_Enemy_h_12_RPC_WRAPPERS
#define Radiant_Source_Radiant_Public_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Radiant_Source_Radiant_Public_Enemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Radiant_Source_Radiant_Public_Enemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Radiant_Source_Radiant_Public_Enemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define Radiant_Source_Radiant_Public_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define Radiant_Source_Radiant_Public_Enemy_h_12_PRIVATE_PROPERTY_OFFSET
#define Radiant_Source_Radiant_Public_Enemy_h_9_PROLOG
#define Radiant_Source_Radiant_Public_Enemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_Enemy_h_12_SPARSE_DATA \
	Radiant_Source_Radiant_Public_Enemy_h_12_RPC_WRAPPERS \
	Radiant_Source_Radiant_Public_Enemy_h_12_INCLASS \
	Radiant_Source_Radiant_Public_Enemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Radiant_Source_Radiant_Public_Enemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_Enemy_h_12_SPARSE_DATA \
	Radiant_Source_Radiant_Public_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_Enemy_h_12_INCLASS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RADIANT_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Radiant_Source_Radiant_Public_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
