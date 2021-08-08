// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef RADIANT_Tower_Slow_generated_h
#error "Tower_Slow.generated.h already included, missing '#pragma once' in Tower_Slow.h"
#endif
#define RADIANT_Tower_Slow_generated_h

#define Radiant_Source_Radiant_Public_Tower_Slow_h_12_SPARSE_DATA
#define Radiant_Source_Radiant_Public_Tower_Slow_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRangeOverlapEnd); \
	DECLARE_FUNCTION(execOnRangeOverlapBegin);


#define Radiant_Source_Radiant_Public_Tower_Slow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRangeOverlapEnd); \
	DECLARE_FUNCTION(execOnRangeOverlapBegin);


#define Radiant_Source_Radiant_Public_Tower_Slow_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATower_Slow(); \
	friend struct Z_Construct_UClass_ATower_Slow_Statics; \
public: \
	DECLARE_CLASS(ATower_Slow, ATower, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(ATower_Slow)


#define Radiant_Source_Radiant_Public_Tower_Slow_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATower_Slow(); \
	friend struct Z_Construct_UClass_ATower_Slow_Statics; \
public: \
	DECLARE_CLASS(ATower_Slow, ATower, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(ATower_Slow)


#define Radiant_Source_Radiant_Public_Tower_Slow_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower_Slow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATower_Slow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower_Slow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower_Slow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower_Slow(ATower_Slow&&); \
	NO_API ATower_Slow(const ATower_Slow&); \
public:


#define Radiant_Source_Radiant_Public_Tower_Slow_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower_Slow(ATower_Slow&&); \
	NO_API ATower_Slow(const ATower_Slow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower_Slow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower_Slow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATower_Slow)


#define Radiant_Source_Radiant_Public_Tower_Slow_h_12_PRIVATE_PROPERTY_OFFSET
#define Radiant_Source_Radiant_Public_Tower_Slow_h_9_PROLOG
#define Radiant_Source_Radiant_Public_Tower_Slow_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_Tower_Slow_h_12_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_Tower_Slow_h_12_SPARSE_DATA \
	Radiant_Source_Radiant_Public_Tower_Slow_h_12_RPC_WRAPPERS \
	Radiant_Source_Radiant_Public_Tower_Slow_h_12_INCLASS \
	Radiant_Source_Radiant_Public_Tower_Slow_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Radiant_Source_Radiant_Public_Tower_Slow_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_Tower_Slow_h_12_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_Tower_Slow_h_12_SPARSE_DATA \
	Radiant_Source_Radiant_Public_Tower_Slow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_Tower_Slow_h_12_INCLASS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_Tower_Slow_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RADIANT_API UClass* StaticClass<class ATower_Slow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Radiant_Source_Radiant_Public_Tower_Slow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
