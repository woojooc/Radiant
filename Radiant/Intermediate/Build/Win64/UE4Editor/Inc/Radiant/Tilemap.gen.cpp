// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/Tilemap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTilemap() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_ATilemap_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ATilemap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ARadiantGameModeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATilemap::execOnSelected)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelected(Z_Param_TouchedComponent,Z_Param_ButtonPressed);
		P_NATIVE_END;
	}
	void ATilemap::StaticRegisterNativesATilemap()
	{
		UClass* Class = ATilemap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSelected", &ATilemap::execOnSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATilemap_OnSelected_Statics
	{
		struct Tilemap_eventOnSelected_Parms
		{
			UPrimitiveComponent* TouchedComponent;
			FKey ButtonPressed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilemap_OnSelected_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATilemap_OnSelected_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tilemap_eventOnSelected_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATilemap_OnSelected_Statics::NewProp_TouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilemap_OnSelected_Statics::NewProp_TouchedComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATilemap_OnSelected_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tilemap_eventOnSelected_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATilemap_OnSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilemap_OnSelected_Statics::NewProp_TouchedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilemap_OnSelected_Statics::NewProp_ButtonPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilemap_OnSelected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Click ?\xcc\xba?\xc6\xae ?\xdf\xbb? -> Spawn Tower ????\n" },
		{ "ModuleRelativePath", "Public/Tilemap.h" },
		{ "ToolTip", "Click ?\xcc\xba?\xc6\xae ?\xdf\xbb? -> Spawn Tower ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilemap_OnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilemap, nullptr, "OnSelected", nullptr, nullptr, sizeof(Tilemap_eventOnSelected_Parms), Z_Construct_UFunction_ATilemap_OnSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilemap_OnSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilemap_OnSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilemap_OnSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilemap_OnSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATilemap_OnSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATilemap_NoRegister()
	{
		return ATilemap::StaticClass();
	}
	struct Z_Construct_UClass_ATilemap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tile_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tile_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATilemap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATilemap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATilemap_OnSelected, "OnSelected" }, // 795425025
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilemap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tilemap.h" },
		{ "ModuleRelativePath", "Public/Tilemap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilemap_Statics::NewProp_root_MetaData[] = {
		{ "Category", "Root" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tilemap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilemap_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilemap, root), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilemap_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilemap_Statics::NewProp_root_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilemap_Statics::NewProp_tile_Inner = { "tile", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilemap_Statics::NewProp_tile_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// 12, 20\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tilemap.h" },
		{ "ToolTip", "12, 20" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATilemap_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilemap, tile), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATilemap_Statics::NewProp_tile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilemap_Statics::NewProp_tile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilemap_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "Comment", "// gamemodebase cache\n" },
		{ "ModuleRelativePath", "Public/Tilemap.h" },
		{ "ToolTip", "gamemodebase cache" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilemap_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilemap, gameModeBase), Z_Construct_UClass_ARadiantGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilemap_Statics::NewProp_gameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilemap_Statics::NewProp_gameModeBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATilemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilemap_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilemap_Statics::NewProp_tile_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilemap_Statics::NewProp_tile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilemap_Statics::NewProp_gameModeBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATilemap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATilemap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATilemap_Statics::ClassParams = {
		&ATilemap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATilemap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATilemap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATilemap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATilemap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATilemap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATilemap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATilemap, 1997198911);
	template<> RADIANT_API UClass* StaticClass<ATilemap>()
	{
		return ATilemap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATilemap(Z_Construct_UClass_ATilemap, &ATilemap::StaticClass, TEXT("/Script/Radiant"), TEXT("ATilemap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATilemap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
