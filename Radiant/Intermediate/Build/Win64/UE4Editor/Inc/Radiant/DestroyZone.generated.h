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
struct FVector;
struct FHitResult;
#ifdef RADIANT_DestroyZone_generated_h
#error "DestroyZone.generated.h already included, missing '#pragma once' in DestroyZone.h"
#endif
#define RADIANT_DestroyZone_generated_h

#define Radiant_Source_Radiant_Public_DestroyZone_h_12_SPARSE_DATA
#define Radiant_Source_Radiant_Public_DestroyZone_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnZoneHit);


#define Radiant_Source_Radiant_Public_DestroyZone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnZoneHit);


#define Radiant_Source_Radiant_Public_DestroyZone_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestroyZone(); \
	friend struct Z_Construct_UClass_ADestroyZone_Statics; \
public: \
	DECLARE_CLASS(ADestroyZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(ADestroyZone)


#define Radiant_Source_Radiant_Public_DestroyZone_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADestroyZone(); \
	friend struct Z_Construct_UClass_ADestroyZone_Statics; \
public: \
	DECLARE_CLASS(ADestroyZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Radiant"), NO_API) \
	DECLARE_SERIALIZER(ADestroyZone)


#define Radiant_Source_Radiant_Public_DestroyZone_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADestroyZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADestroyZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestroyZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestroyZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestroyZone(ADestroyZone&&); \
	NO_API ADestroyZone(const ADestroyZone&); \
public:


#define Radiant_Source_Radiant_Public_DestroyZone_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestroyZone(ADestroyZone&&); \
	NO_API ADestroyZone(const ADestroyZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestroyZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestroyZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestroyZone)


#define Radiant_Source_Radiant_Public_DestroyZone_h_12_PRIVATE_PROPERTY_OFFSET
#define Radiant_Source_Radiant_Public_DestroyZone_h_9_PROLOG
#define Radiant_Source_Radiant_Public_DestroyZone_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_DestroyZone_h_12_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_DestroyZone_h_12_SPARSE_DATA \
	Radiant_Source_Radiant_Public_DestroyZone_h_12_RPC_WRAPPERS \
	Radiant_Source_Radiant_Public_DestroyZone_h_12_INCLASS \
	Radiant_Source_Radiant_Public_DestroyZone_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Radiant_Source_Radiant_Public_DestroyZone_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Radiant_Source_Radiant_Public_DestroyZone_h_12_PRIVATE_PROPERTY_OFFSET \
	Radiant_Source_Radiant_Public_DestroyZone_h_12_SPARSE_DATA \
	Radiant_Source_Radiant_Public_DestroyZone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_DestroyZone_h_12_INCLASS_NO_PURE_DECLS \
	Radiant_Source_Radiant_Public_DestroyZone_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RADIANT_API UClass* StaticClass<class ADestroyZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Radiant_Source_Radiant_Public_DestroyZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
