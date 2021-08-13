// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RadiantGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class RADIANT_API ARadiantGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ARadiantGameModeBase();

	virtual void BeginPlay() override;

	virtual void InitGameState() override;

	virtual void Tick(float DeltaSeconds) override;


	// # Component
	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UGameStateController* gameStateController;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UWidgetController* widgetController;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class USetTower* setTowerCompo;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UObjectPool* objectPool;
	
	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UStageLoad* stageloadCompo;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UIntroComp* introComp;

	// # 속성

	//		# 타워 생성
	UPROPERTY(VisibleAnywhere,Category = "Generate")
	bool canTileSelect = false;
	UPROPERTY(VisibleAnywhere, Category = "Generate")
	int selectedIdx = 0;

	//		# 벽 생성
	UPROPERTY(VisibleAnywhere, Category = "Generate")
	bool canWallSelect = false;

	// # 기능

	//		# 타워 생성
	bool CanTileSelect()
	{
		return canTileSelect;
	}

	void SetTileSelect(bool b);

	void SetSelectedIdx(int value)
	{
		selectedIdx = value;
	}

	int GetSelectedIdx()
	{
		return selectedIdx;
	}

	//		# 벽 생성
	bool CanWallSelect()
	{
		return canWallSelect;
	}

	void SetWallSelect(bool b);


public:

	//      #점수 
	int Point;

	int GetPoint();
	void AddPoint(int a);
public:
	//       #코인
	int Coin;

	int GetCoin();
	void AddCoin(int b);

public:

	// # 블럭수 
	int Block;

	int GetBlock();
	void AddBlock(int c);

	//목숨
	int Life;

	int GetLife();
	void AddLife(int d);
	void MinusLife();

	// 총 생성된 적의 수, 남아있는 적의 수
	int EnemyTotal = 25;
	int EnemyLast;

	void SetEnemyTotal(int e);
	int GetEnymyTotal();
	int GetEnymyLast();

	// 적 남은 수를 1 감소시킨다.
	void MinusEnemyLast();



};
