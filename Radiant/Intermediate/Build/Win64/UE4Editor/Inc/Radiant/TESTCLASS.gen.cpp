// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/TESTCLASS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTESTCLASS() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_ATESTCLASS_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ATESTCLASS();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Radiant();
// End Cross Module References
	void ATESTCLASS::StaticRegisterNativesATESTCLASS()
	{
	}
	UClass* Z_Construct_UClass_ATESTCLASS_NoRegister()
	{
		return ATESTCLASS::StaticClass();
	}
	struct Z_Construct_UClass_ATESTCLASS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATESTCLASS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATESTCLASS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TESTCLASS.h" },
		{ "ModuleRelativePath", "Public/TESTCLASS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATESTCLASS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATESTCLASS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATESTCLASS_Statics::ClassParams = {
		&ATESTCLASS::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATESTCLASS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATESTCLASS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATESTCLASS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATESTCLASS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATESTCLASS, 618076429);
	template<> RADIANT_API UClass* StaticClass<ATESTCLASS>()
	{
		return ATESTCLASS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATESTCLASS(Z_Construct_UClass_ATESTCLASS, &ATESTCLASS::StaticClass, TEXT("/Script/Radiant"), TEXT("ATESTCLASS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATESTCLASS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
