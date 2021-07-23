// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

//Log Castegory 추가하고 싶다.
DECLARE_LOG_CATEGORY_EXTERN(Radiant, Log, All);

#define APPINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define CALLINFO() UE_LOG(Shoot, Warning, TEXT("%s"), *APPINFO);
#define PRINTLOG(fmt, ... ) UE_LOG(Shoot, Warning, TEXT("%s %s"), *APPINFO, *FString::Printf(fmt, ##__VA_ARGS__))