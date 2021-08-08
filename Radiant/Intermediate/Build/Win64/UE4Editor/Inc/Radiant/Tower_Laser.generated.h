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
#ifdef RADIANT_Tower_Laser_generated_h
#error "Tower_Laser.generated.h already included, missing '#pragma once' in Tower_Laser.h"
#endif
#define RADIANT_Tower_Laser_generated_h

#define Radiant_Source_Radiant_Public_Tower_Laser_h_15_SPARSE_DATA
#define Radiant_Source_Radiant_Public_Tower_Laser_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRangeOverlapEnd); \
	DECLARE_FUNCTION(execOnRangeOverlapBegin);


#define Radiant_Source_Radiant_Public_Tower_Laser_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRangeOverlapEnd); \
	DECLARE_FUNCTION(execOnRangeOverlapBegin);


#define Radiant_Source_Radiant_Public_Tower_Laser_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATower_Laser(); \
	friend struct Z_Construct_UClass_ATower_Laser_Statics; \
public: \
	DECLARE_CLASS(ATower_Laser, ATower, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(ATower_Laser)


#define Radiant_Source_Radiant_Public_Tower_Laser_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATower_Laser(); \
	friend struct Z_Construct_UClass_ATower_Laser_Statics; \
public: \
	DECLARE_CLASS(ATower_Laser, ATower, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(ATower_Laser)


#define Radiant_Source_Radiant_Public_Tower_Laser_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower_Laser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATower_Laser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower_Laser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower_Laser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower_Laser(ATower_Laser&&); \
	NO_API ATower_Laser(const ATower_Laser&); \
public:


#define Radiant_Source_Radiant_Public_Tower_Laser_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower_Laser(ATower_Laser&&); \
	NO_API ATower_Laser(const ATower_Laser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower_Laser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower_Laser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATower_Laser)


#define Radiant_Source_Radiant_Public_Tower_Laser_h_15_PRIVATE_PROPERTY_OFFSET
#define Radiant_Source_Radiant_Public_Tower_Laser_h_12_PROLOG
#define Radiant_Source_Radiant_Public_Tower_Laser_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_Tower_Laser_h_15_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_Tower_Laser_h_15_SPARSE_DATA \
	Radiant_Source_Radiant_Public_Tower_Laser_h_15_RPC_WRAPPERS \
	Radiant_Source_Radiant_Public_Tower_Laser_h_15_INCLASS \
	Radiant_Source_Radiant_Public_Tower_Laser_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Radiant_Source_Radiant_Public_Tower_Laser_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_Tower_Laser_h_15_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_Tower_Laser_h_15_SPARSE_DATA \
	Radiant_Source_Radiant_Public_Tower_Laser_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_Tower_Laser_h_15_INCLASS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_Tower_Laser_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RADIANT_API UClass* StaticClass<class ATower_Laser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Radiant_Source_Radiant_Public_Tower_Laser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
