// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RADIANT_UI_Tower_generated_h
#error "UI_Tower.generated.h already included, missing '#pragma once' in UI_Tower.h"
#endif
#define RADIANT_UI_Tower_generated_h

#define Radiant_Source_Radiant_Public_UI_Tower_h_16_SPARSE_DATA
#define Radiant_Source_Radiant_Public_UI_Tower_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBtn02Clicked); \
	DECLARE_FUNCTION(execOnBtn01Clicked); \
	DECLARE_FUNCTION(execOnBtn00Clicked); \
	DECLARE_FUNCTION(execOnBtnClicked);


#define Radiant_Source_Radiant_Public_UI_Tower_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBtn02Clicked); \
	DECLARE_FUNCTION(execOnBtn01Clicked); \
	DECLARE_FUNCTION(execOnBtn00Clicked); \
	DECLARE_FUNCTION(execOnBtnClicked);


#define Radiant_Source_Radiant_Public_UI_Tower_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUI_Tower(); \
	friend struct Z_Construct_UClass_UUI_Tower_Statics; \
public: \
	DECLARE_CLASS(UUI_Tower, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(UUI_Tower)


#define Radiant_Source_Radiant_Public_UI_Tower_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUI_Tower(); \
	friend struct Z_Construct_UClass_UUI_Tower_Statics; \
public: \
	DECLARE_CLASS(UUI_Tower, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(UUI_Tower)


#define Radiant_Source_Radiant_Public_UI_Tower_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUI_Tower(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUI_Tower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUI_Tower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUI_Tower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUI_Tower(UUI_Tower&&); \
	NO_API UUI_Tower(const UUI_Tower&); \
public:


#define Radiant_Source_Radiant_Public_UI_Tower_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUI_Tower(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUI_Tower(UUI_Tower&&); \
	NO_API UUI_Tower(const UUI_Tower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUI_Tower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUI_Tower); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUI_Tower)


#define Radiant_Source_Radiant_Public_UI_Tower_h_16_PRIVATE_PROPERTY_OFFSET
#define Radiant_Source_Radiant_Public_UI_Tower_h_13_PROLOG
#define Radiant_Source_Radiant_Public_UI_Tower_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_UI_Tower_h_16_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_UI_Tower_h_16_SPARSE_DATA \
	Radiant_Source_Radiant_Public_UI_Tower_h_16_RPC_WRAPPERS \
	Radiant_Source_Radiant_Public_UI_Tower_h_16_INCLASS \
	Radiant_Source_Radiant_Public_UI_Tower_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Radiant_Source_Radiant_Public_UI_Tower_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_UI_Tower_h_16_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_UI_Tower_h_16_SPARSE_DATA \
	Radiant_Source_Radiant_Public_UI_Tower_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_UI_Tower_h_16_INCLASS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_UI_Tower_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RADIANT_API UClass* StaticClass<class UUI_Tower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Radiant_Source_Radiant_Public_UI_Tower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
