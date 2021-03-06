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

	// # 加己

	//		# 鸥况 积己
	UPROPERTY(VisibleAnywhere,Category = "Generate")
	bool canTileSelect = false;
	UPROPERTY(VisibleAnywhere, Category = "Generate")
	int selectedIdx = 0;

	//		# 寒 积己
	UPROPERTY(VisibleAnywhere, Category = "Generate")
	bool canWallSelect = false;

	// # 扁瓷

	//		# 鸥况 积己
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

	//		# 寒 积己
	bool CanWallSelect()
	{
		return canWallSelect;
	}

	void SetWallSelect(bool b);


public:

	//      #痢荐 
	int Point;

	int GetPoint();
	void AddPoint(int a);
public:
	//       #内牢
	int Coin;

	int GetCoin();
	void AddCoin(int b);

public:

	// # 喉钒荐 
	int Block;

	int GetBlock();
	void AddBlock(int c);

	//格见
	int Life;

	int GetLife();
	void AddLife(int d);
	void MinusLife();

	// 醚 积己等 利狼 荐, 巢酒乐绰 利狼 荐
	int EnemyTotal = 25;
	int EnemyLast;

	void SetEnemyTotal(int e);
	int GetEnymyTotal();
	int GetEnymyLast();

	// 利 巢篮 荐甫 1 皑家矫挪促.
	void MinusEnemyLast();



};
