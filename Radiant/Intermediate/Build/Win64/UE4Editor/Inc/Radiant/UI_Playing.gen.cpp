// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Radiant/Public/UI_Playing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_Playing() {}
// Cross Module References
	RADIANT_API UClass* Z_Construct_UClass_UUI_Playing_NoRegister();
	RADIANT_API UClass* Z_Construct_UClass_UUI_Playing();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Radiant();
	RADIANT_API UClass* Z_Construct_UClass_ARadiantGameModeBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUI_Playing::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUI_Playing::execOnStartClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartClicked();
		P_NATIVE_END;
	}
	void UUI_Playing::StaticRegisterNativesUUI_Playing()
	{
		UClass* Class = UUI_Playing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStartClicked", &UUI_Playing::execOnStartClicked },
			{ "Start", &UUI_Playing::execStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUI_Playing_OnStartClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUI_Playing_OnStartClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_Playing_OnStartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_Playing, nullptr, "OnStartClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUI_Playing_OnStartClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_Playing_OnStartClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUI_Playing_OnStartClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUI_Playing_OnStartClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUI_Playing_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUI_Playing_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_Playing_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_Playing, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUI_Playing_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_Playing_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUI_Playing_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUI_Playing_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUI_Playing_NoRegister()
	{
		return UUI_Playing::StaticClass();
	}
	struct Z_Construct_UClass_UUI_Playing_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_img_playing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_img_playing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_txt_point_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_txt_point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_txt_coin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_txt_coin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_txt_build_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_txt_build;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_txt_life_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_txt_life;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_txt_enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_txt_enemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUI_Playing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Radiant,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUI_Playing_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUI_Playing_OnStartClicked, "OnStartClicked" }, // 2529470011
		{ &Z_Construct_UFunction_UUI_Playing_Start, "Start" }, // 799413680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Playing_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI_Playing.h" },
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Playing_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "Comment", "// # ??????\xc6\xae ???? ???? ??\xc3\xbc\n" },
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
		{ "ToolTip", "# ??????\xc6\xae ???? ???? ??\xc3\xbc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Playing_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Playing, gameModeBase), Z_Construct_UClass_ARadiantGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Playing_Statics::NewProp_gameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Playing_Statics::NewProp_gameModeBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Playing_Statics::NewProp_Btn_Start_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI_Playing" },
		{ "Comment", "//UI ???? ????????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
		{ "ToolTip", "UI ???? ????????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Playing_Statics::NewProp_Btn_Start = { "Btn_Start", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Playing, Btn_Start), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Playing_Statics::NewProp_Btn_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Playing_Statics::NewProp_Btn_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Playing_Statics::NewProp_img_playing_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI_Playing" },
		{ "Comment", "// Playing ui ???\xd2\xbd? ????????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
		{ "ToolTip", "Playing ui ???\xd2\xbd? ????????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Playing_Statics::NewProp_img_playing = { "img_playing", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Playing, img_playing), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Playing_Statics::NewProp_img_playing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Playing_Statics::NewProp_img_playing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_point_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI_Playing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_point = { "txt_point", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Playing, txt_point), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_point_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_coin_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI_Playing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_coin = { "txt_coin", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Playing, txt_coin), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_coin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_coin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_build_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI_Playing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_build = { "txt_build", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Playing, txt_build), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_build_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_build_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_life_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI_Playing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_life = { "txt_life", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Playing, txt_life), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_life_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_life_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_enemy_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI_Playing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI_Playing.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_enemy = { "txt_enemy", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUI_Playing, txt_enemy), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_enemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUI_Playing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Playing_Statics::NewProp_gameModeBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Playing_Statics::NewProp_Btn_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Playing_Statics::NewProp_img_playing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_coin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_build,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_life,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_Playing_Statics::NewProp_txt_enemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUI_Playing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_Playing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUI_Playing_Statics::ClassParams = {
		&UUI_Playing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUI_Playing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Playing_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUI_Playing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Playing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUI_Playing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUI_Playing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUI_Playing, 1421226701);
	template<> RADIANT_API UClass* StaticClass<UUI_Playing>()
	{
		return UUI_Playing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUI_Playing(Z_Construct_UClass_UUI_Playing, &UUI_Playing::StaticClass, TEXT("/Script/Radiant"), TEXT("UUI_Playing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_Playing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
