// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/UI_Tower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_Tower() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_UUI_Tower_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UUI_Tower();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_ARadiantGameModeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUI_Tower::execOnBtn02Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBtn02Clicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUI_Tower::execOnBtn01Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBtn01Clicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUI_Tower::execOnBtn00Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBtn00Clicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUI_Tower::execOnBtnClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBtnClicked();
		P_NATIVE_END;
	}
	void UUI_Tower::StaticRegisterNativesUUI_Tower()
	{
		UClass* Class = UUI_Tower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBtn00Clicked", &UUI_Tower::execOnBtn00Clicked },
			{ "OnBtn01Clicked", &UUI_Tower::execOnBtn01Clicked },
			{ "OnBtn02Clicked", &UUI_Tower::execOnBtn02Clicked },
			{ "OnBtnClicked", &UUI_Tower::execOnBtnClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUI_Tower_OnBtn00Clicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUI_Tower_OnBtn00Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI_Tower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_Tower_OnBtn00Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_Tower, nullptr, "OnBtn00Clicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUI_Tower_OnBtn00Clicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_Tower_OnBtn00Clicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUI_Tower_OnBtn00Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUI_Tower_OnBtn00Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUI_Tower_OnBtn01Clicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUI_Tower_OnBtn01Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI_Tower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_Tower_OnBtn01Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_Tower, nullptr, "OnBtn01Clicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUI_Tower_OnBtn01Clicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_Tower_OnBtn01Clicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUI_Tower_OnBtn01Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUI_Tower_OnBtn01Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUI_Tower_OnBtn02Clicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUI_Tower_OnBtn02Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI_Tower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_Tower_OnBtn02Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_Tower, nullptr, "OnBtn02Clicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUI_Tower_OnBtn02Clicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_Tower_OnBtn02Clicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUI_Tower_OnBtn02Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUI_Tower_OnBtn02Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUI_Tower_OnBtnClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUI_Tower_OnBtnClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI_Tower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_Tower_OnBtnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_Tower, nullptr, "OnBtnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUI_Tower_OnBtnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_Tower_OnBtnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUI_Tower_OnBtnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUI_Tower_OnBtnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUI_Tower_NoRegister()
	{
		return UUI_Tower::StaticClass();
	}
	struct Z_Construct_UClass_UUI_Tower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_btnArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_btnArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_btnArr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUI_Tower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUI_Tower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUI_Tower_OnBtn00Clicked, "OnBtn00Clicked" }, // 2592371546
		{ &Z_Construct_UFunction_UUI_Tower_OnBtn01Clicked, "OnBtn01Clicked" }, // 3510821516
		{ &Z_Construct_UFunction_UUI_Tower_OnBtn02Clicked, "OnBtn02Clicked" }, // 1123910472
		{ &Z_Construct_UFunction_UUI_Tower_OnBtnClicked, "OnBtnClicked" }, // 3130845860
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Tower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI_Tower.h" },
		{ "ModuleRelativePath", "Public/UI_Tower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Tower_Statics::NewProp_btnArr_Inner = { "btnArr", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Tower_Statics::NewProp_btnArr_MetaData[] = {
		{ "Category", "UI_Tower" },
		{ "Comment", "// Btn ????????\n//, meta = (BindWidget))\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI_Tower.h" },
		{ "ToolTip", "Btn ????????\n, meta = (BindWidget))" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUI_Tower_Statics::NewProp_btnArr = { "btnArr", nullptr, (EPropertyFlags)0x001000800000000c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Tower, btnArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUI_Tower_Statics::NewProp_btnArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Tower_Statics::NewProp_btnArr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Tower_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "Comment", "// gamemodebase cache\n" },
		{ "ModuleRelativePath", "Public/UI_Tower.h" },
		{ "ToolTip", "gamemodebase cache" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Tower_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Tower, gameModeBase), Z_Construct_UClass_ARadiantGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Tower_Statics::NewProp_gameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Tower_Statics::NewProp_gameModeBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUI_Tower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Tower_Statics::NewProp_btnArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Tower_Statics::NewProp_btnArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Tower_Statics::NewProp_gameModeBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUI_Tower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_Tower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUI_Tower_Statics::ClassParams = {
		&UUI_Tower::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUI_Tower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Tower_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUI_Tower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Tower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUI_Tower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUI_Tower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUI_Tower, 583104505);
	template<> RADIANT_API UClass* StaticClass<UUI_Tower>()
	{
		return UUI_Tower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUI_Tower(Z_Construct_UClass_UUI_Tower, &UUI_Tower::StaticClass, TEXT("/Script/Radiant"), TEXT("UUI_Tower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_Tower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
