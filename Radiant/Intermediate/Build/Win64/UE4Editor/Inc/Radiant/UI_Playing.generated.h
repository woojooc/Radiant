// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RADIANT_UI_Playing_generated_h
#error "UI_Playing.generated.h already included, missing '#pragma once' in UI_Playing.h"
#endif
#define RADIANT_UI_Playing_generated_h

#define Radiant_Source_Radiant_Public_UI_Playing_h_16_SPARSE_DATA
#define Radiant_Source_Radiant_Public_UI_Playing_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execOnStartClicked);


#define Radiant_Source_Radiant_Public_UI_Playing_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execOnStartClicked);


#define Radiant_Source_Radiant_Public_UI_Playing_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUI_Playing(); \
	friend struct Z_Construct_UClass_UUI_Playing_Statics; \
public: \
	DECLARE_CLASS(UUI_Playing, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(UUI_Playing)


#define Radiant_Source_Radiant_Public_UI_Playing_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUI_Playing(); \
	friend struct Z_Construct_UClass_UUI_Playing_Statics; \
public: \
	DECLARE_CLASS(UUI_Playing, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(UUI_Playing)


#define Radiant_Source_Radiant_Public_UI_Playing_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUI_Playing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUI_Playing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUI_Playing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUI_Playing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUI_Playing(UUI_Playing&&); \
	NO_API UUI_Playing(const UUI_Playing&); \
public:


#define Radiant_Source_Radiant_Public_UI_Playing_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUI_Playing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUI_Playing(UUI_Playing&&); \
	NO_API UUI_Playing(const UUI_Playing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUI_Playing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUI_Playing); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUI_Playing)


#define Radiant_Source_Radiant_Public_UI_Playing_h_16_PRIVATE_PROPERTY_OFFSET
#define Radiant_Source_Radiant_Public_UI_Playing_h_13_PROLOG
#define Radiant_Source_Radiant_Public_UI_Playing_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_UI_Playing_h_16_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_UI_Playing_h_16_SPARSE_DATA \
	Radiant_Source_Radiant_Public_UI_Playing_h_16_RPC_WRAPPERS \
	Radiant_Source_Radiant_Public_UI_Playing_h_16_INCLASS \
	Radiant_Source_Radiant_Public_UI_Playing_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Radiant_Source_Radiant_Public_UI_Playing_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_UI_Playing_h_16_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_UI_Playing_h_16_SPARSE_DATA \
	Radiant_Source_Radiant_Public_UI_Playing_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_UI_Playing_h_16_INCLASS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_UI_Playing_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RADIANT_API UClass* StaticClass<class UUI_Playing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Radiant_Source_Radiant_Public_UI_Playing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
