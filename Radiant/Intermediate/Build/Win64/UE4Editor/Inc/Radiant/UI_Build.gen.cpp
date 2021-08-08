// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/UI_Build.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_Build() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_UUI_Build_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UUI_Build();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	RADIANT_API UClass* Z_Construct_UClass_ARadiantGameModeBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUI_Build::execDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Done();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUI_Build::execOnDoneClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoneClicked();
		P_NATIVE_END;
	}
	void UUI_Build::StaticRegisterNativesUUI_Build()
	{
		UClass* Class = UUI_Build::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Done", &UUI_Build::execDone },
			{ "OnDoneClicked", &UUI_Build::execOnDoneClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUI_Build_Done_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUI_Build_Done_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI_Build.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_Build_Done_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_Build, nullptr, "Done", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUI_Build_Done_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_Build_Done_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUI_Build_Done()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUI_Build_Done_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUI_Build_OnDoneClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUI_Build_OnDoneClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI_Build.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_Build_OnDoneClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_Build, nullptr, "OnDoneClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUI_Build_OnDoneClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_Build_OnDoneClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUI_Build_OnDoneClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUI_Build_OnDoneClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUI_Build_NoRegister()
	{
		return UUI_Build::StaticClass();
	}
	struct Z_Construct_UClass_UUI_Build_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Btn_Done_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Btn_Done;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUI_Build_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUI_Build_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUI_Build_Done, "Done" }, // 427530339
		{ &Z_Construct_UFunction_UUI_Build_OnDoneClicked, "OnDoneClicked" }, // 1029123733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Build_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI_Build.h" },
		{ "ModuleRelativePath", "Public/UI_Build.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Build_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "Comment", "// # ??????\xc6\xae ???? ???? ??\xc3\xbc\n" },
		{ "ModuleRelativePath", "Public/UI_Build.h" },
		{ "ToolTip", "# ??????\xc6\xae ???? ???? ??\xc3\xbc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Build_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Build, gameModeBase), Z_Construct_UClass_ARadiantGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Build_Statics::NewProp_gameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Build_Statics::NewProp_gameModeBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Build_Statics::NewProp_Btn_Done_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI_Build" },
		{ "Comment", "//UI ???? ????????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI_Build.h" },
		{ "ToolTip", "UI ???? ????????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Build_Statics::NewProp_Btn_Done = { "Btn_Done", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Build, Btn_Done), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Build_Statics::NewProp_Btn_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Build_Statics::NewProp_Btn_Done_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUI_Build_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Build_Statics::NewProp_gameModeBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Build_Statics::NewProp_Btn_Done,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUI_Build_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_Build>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUI_Build_Statics::ClassParams = {
		&UUI_Build::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUI_Build_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Build_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUI_Build_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Build_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUI_Build()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUI_Build_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUI_Build, 2733281845);
	template<> RADIANT_API UClass* StaticClass<UUI_Build>()
	{
		return UUI_Build::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUI_Build(Z_Construct_UClass_UUI_Build, &UUI_Build::StaticClass, TEXT("/Script/Radiant"), TEXT("UUI_Build"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_Build);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
