// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/UI_Intro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_Intro() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_UUI_Intro_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UUI_Intro();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	RADIANT_API UClass* Z_Construct_UClass_ARadiantGameModeBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUI_Intro::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUI_Intro::execOnStartClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartClicked();
		P_NATIVE_END;
	}
	void UUI_Intro::StaticRegisterNativesUUI_Intro()
	{
		UClass* Class = UUI_Intro::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStartClicked", &UUI_Intro::execOnStartClicked },
			{ "Start", &UUI_Intro::execStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUI_Intro_OnStartClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUI_Intro_OnStartClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI_Intro.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_Intro_OnStartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_Intro, nullptr, "OnStartClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUI_Intro_OnStartClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_Intro_OnStartClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUI_Intro_OnStartClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUI_Intro_OnStartClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUI_Intro_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUI_Intro_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI_Intro.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_Intro_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_Intro, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUI_Intro_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_Intro_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUI_Intro_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUI_Intro_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUI_Intro_NoRegister()
	{
		return UUI_Intro::StaticClass();
	}
	struct Z_Construct_UClass_UUI_Intro_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Btn_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Btn_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUI_Intro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUI_Intro_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUI_Intro_OnStartClicked, "OnStartClicked" }, // 1035153473
		{ &Z_Construct_UFunction_UUI_Intro_Start, "Start" }, // 2701638697
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Intro_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI_Intro.h" },
		{ "ModuleRelativePath", "Public/UI_Intro.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Intro_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "Comment", "// # ??????\xc6\xae ???? ???? ??\xc3\xbc\n" },
		{ "ModuleRelativePath", "Public/UI_Intro.h" },
		{ "ToolTip", "# ??????\xc6\xae ???? ???? ??\xc3\xbc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Intro_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Intro, gameModeBase), Z_Construct_UClass_ARadiantGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Intro_Statics::NewProp_gameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Intro_Statics::NewProp_gameModeBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Intro_Statics::NewProp_Btn_Start_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI_Intro" },
		{ "Comment", "//UI ???? ????????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI_Intro.h" },
		{ "ToolTip", "UI ???? ????????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Intro_Statics::NewProp_Btn_Start = { "Btn_Start", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Intro, Btn_Start), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Intro_Statics::NewProp_Btn_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Intro_Statics::NewProp_Btn_Start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUI_Intro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Intro_Statics::NewProp_gameModeBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Intro_Statics::NewProp_Btn_Start,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUI_Intro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_Intro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUI_Intro_Statics::ClassParams = {
		&UUI_Intro::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUI_Intro_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Intro_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUI_Intro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Intro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUI_Intro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUI_Intro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUI_Intro, 752120355);
	template<> RADIANT_API UClass* StaticClass<UUI_Intro>()
	{
		return UUI_Intro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUI_Intro(Z_Construct_UClass_UUI_Intro, &UUI_Intro::StaticClass, TEXT("/Script/Radiant"), TEXT("UUI_Intro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_Intro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
