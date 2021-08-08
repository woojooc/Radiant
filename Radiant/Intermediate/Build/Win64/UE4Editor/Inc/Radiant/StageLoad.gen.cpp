// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/StageLoad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageLoad() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_UStageLoad_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UStageLoad();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UStageLoad::StaticRegisterNativesUStageLoad()
	{
	}
	UClass* Z_Construct_UClass_UStageLoad_NoRegister()
	{
		return UStageLoad::StaticClass();
	}
	struct Z_Construct_UClass_UStageLoad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_locations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_locations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_locations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStageLoad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageLoad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StageLoad.h" },
		{ "ModuleRelativePath", "Public/StageLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStageLoad_Statics::NewProp_locations_Inner = { "locations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageLoad_Statics::NewProp_locations_MetaData[] = {
		{ "ModuleRelativePath", "Public/StageLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStageLoad_Statics::NewProp_locations = { "locations", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStageLoad, locations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStageLoad_Statics::NewProp_locations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageLoad_Statics::NewProp_locations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStageLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageLoad_Statics::NewProp_locations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageLoad_Statics::NewProp_locations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStageLoad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStageLoad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStageLoad_Statics::ClassParams = {
		&UStageLoad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStageLoad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStageLoad_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStageLoad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStageLoad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStageLoad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStageLoad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStageLoad, 1226779649);
	template<> RADIANT_API UClass* StaticClass<UStageLoad>()
	{
		return UStageLoad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStageLoad(Z_Construct_UClass_UStageLoad, &UStageLoad::StaticClass, TEXT("/Script/Radiant"), TEXT("UStageLoad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStageLoad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
