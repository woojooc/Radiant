// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/Tower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_ATower_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ATower();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Radiant();
// End Cross Module References
	void ATower::StaticRegisterNativesATower()
	{
	}
	UClass* Z_Construct_UClass_ATower_NoRegister()
	{
		return ATower::StaticClass();
	}
	struct Z_Construct_UClass_ATower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tower.h" },
		{ "ModuleRelativePath", "Public/Tower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_range_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// ???\xc5\xb8?\n" },
		{ "ModuleRelativePath", "Public/Tower.h" },
		{ "ToolTip", "???\xc5\xb8?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower, range), METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATower_Statics::ClassParams = {
		&ATower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATower, 652940923);
	template<> RADIANT_API UClass* StaticClass<ATower>()
	{
		return ATower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATower(Z_Construct_UClass_ATower, &ATower::StaticClass, TEXT("/Script/Radiant"), TEXT("ATower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
