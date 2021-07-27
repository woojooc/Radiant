// Copyright Epic Games, Inc. All Rights Reserved.


#include "RadiantGameModeBase.h"
#include "GameStateController.h"
#include "WidgetController.h"
#include "SetTower.h"
#include "StageInfo.h"
#include "ObjectPool.h"

ARadiantGameModeBase::ARadiantGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	// # Component »ý¼º
	gameStateController = CreateDefaultSubobject<UGameStateController>(TEXT("GameStateController"));
	widgetController = CreateDefaultSubobject<UWidgetController>(TEXT("WidgetController"));
	stageInfoCompo = CreateDefaultSubobject<UStageInfo>(TEXT("StageInfo"));
	setTowerCompo = CreateDefaultSubobject<USetTower>(TEXT("SetTower"));
	objectPool = CreateDefaultSubobject<UObjectPool>(TEXT("ObjectPool"));

}

void ARadiantGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void ARadiantGameModeBase::InitGameState()
{
	Super::InitGameState();
}

void ARadiantGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ARadiantGameModeBase::SetTileSelect(bool b)
{
	APlayerController* myController = GetWorld()->GetFirstPlayerController();
	myController->bEnableClickEvents = b;
	canSelect = b;
}