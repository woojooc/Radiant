// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RADIANT_UI_Build_generated_h
#error "UI_Build.generated.h already included, missing '#pragma once' in UI_Build.h"
#endif
#define RADIANT_UI_Build_generated_h

#define Radiant_Source_Radiant_Public_UI_Build_h_16_SPARSE_DATA
#define Radiant_Source_Radiant_Public_UI_Build_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDone); \
	DECLARE_FUNCTION(execOnDoneClicked);


#define Radiant_Source_Radiant_Public_UI_Build_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDone); \
	DECLARE_FUNCTION(execOnDoneClicked);


#define Radiant_Source_Radiant_Public_UI_Build_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUI_Build(); \
	friend struct Z_Construct_UClass_UUI_Build_Statics; \
public: \
	DECLARE_CLASS(UUI_Build, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(UUI_Build)


#define Radiant_Source_Radiant_Public_UI_Build_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUI_Build(); \
	friend struct Z_Construct_UClass_UUI_Build_Statics; \
public: \
	DECLARE_CLASS(UUI_Build, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(UUI_Build)


#define Radiant_Source_Radiant_Public_UI_Build_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUI_Build(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUI_Build) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUI_Build); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUI_Build); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUI_Build(UUI_Build&&); \
	NO_API UUI_Build(const UUI_Build&); \
public:


#define Radiant_Source_Radiant_Public_UI_Build_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUI_Build(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUI_Build(UUI_Build&&); \
	NO_API UUI_Build(const UUI_Build&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUI_Build); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUI_Build); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUI_Build)


#define Radiant_Source_Radiant_Public_UI_Build_h_16_PRIVATE_PROPERTY_OFFSET
#define Radiant_Source_Radiant_Public_UI_Build_h_13_PROLOG
#define Radiant_Source_Radiant_Public_UI_Build_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_UI_Build_h_16_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_UI_Build_h_16_SPARSE_DATA \
	Radiant_Source_Radiant_Public_UI_Build_h_16_RPC_WRAPPERS \
	Radiant_Source_Radiant_Public_UI_Build_h_16_INCLASS \
	Radiant_Source_Radiant_Public_UI_Build_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Radiant_Source_Radiant_Public_UI_Build_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_UI_Build_h_16_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_UI_Build_h_16_SPARSE_DATA \
	Radiant_Source_Radiant_Public_UI_Build_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_UI_Build_h_16_INCLASS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_UI_Build_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RADIANT_API UClass* StaticClass<class UUI_Build>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Radiant_Source_Radiant_Public_UI_Build_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
