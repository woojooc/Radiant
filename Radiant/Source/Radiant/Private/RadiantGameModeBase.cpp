// Copyright Epic Games, Inc. All Rights Reserved.


#include "RadiantGameModeBase.h"
#include "GameStateController.h"
#include "WidgetController.h"
#include "SetTower.h"
#include "StageLoad.h"
#include "ObjectPool.h"
#include "IntroComp.h"

ARadiantGameModeBase::ARadiantGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	// # Component »ý¼º
	stageloadCompo = CreateDefaultSubobject<UStageLoad>(TEXT("StageLoad"));
	gameStateController = CreateDefaultSubobject<UGameStateController>(TEXT("GameStateController"));
	widgetController = CreateDefaultSubobject<UWidgetController>(TEXT("WidgetController"));
	setTowerCompo = CreateDefaultSubobject<USetTower>(TEXT("SetTower"));
	objectPool = CreateDefaultSubobject<UObjectPool>(TEXT("ObjectPool"));
	introComp = CreateDefaultSubobject<UIntroComp>(TEXT("IntroComp"));
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
	//PRINTLOG(TEXT("SetTileSelect : %s"), b);

	APlayerController* myController = GetWorld()->GetFirstPlayerController();
	myController->bEnableClickEvents = b;
	canTileSelect = b;
}

void ARadiantGameModeBase::SetWallSelect(bool b)
{
	//PRINTLOG(TEXT("SetWallSelect : %s"), b);

	APlayerController* myController = GetWorld()->GetFirstPlayerController();
	myController->bEnableClickEvents = b;
	canWallSelect = b;
}


void ARadiantGameModeBase::AddPoint(int a)
{

	Point = Point + a;

}
int ARadiantGameModeBase::GetPoint()
{
	return Point;
}

void ARadiantGameModeBase::AddCoin(int b)
{

	Coin = Coin + b;
}

int ARadiantGameModeBase::GetCoin()
{
	return Coin;

}


void ARadiantGameModeBase::AddBlock(int c)
{

	Block = Block + c;
}

int ARadiantGameModeBase::GetBlock()
{
	return Block;

}

void ARadiantGameModeBase::AddLife(int d)
{

	Life = Life + d;
}

int ARadiantGameModeBase::GetLife()
{
	return Life;

}

void ARadiantGameModeBase::MinusLife()
{
	Life = Life - 1;
}

// 
void ARadiantGameModeBase::SetEnemyTotal(int e)
{
	EnemyTotal = e;
}


int ARadiantGameModeBase::GetEnymyTotal()
{
	return EnemyTotal;
}

int ARadiantGameModeBase::GetEnymyLast()
{
	return EnemyLast;
}

void ARadiantGameModeBase::MinusEnemyLast()
{

	EnemyLast = EnemyLast - 1;
}


