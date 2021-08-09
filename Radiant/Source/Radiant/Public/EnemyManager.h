// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "GameFramework/Actor.h"
#include "EnemyManager.generated.h"

// 일정시간에 한번씩 적을 만들고 싶다.
// 1. 적을 만들고 싶다.
// 2. 일정시간이 됐으니
// 3. 시간이 흘렀으니까
//필요속성 : 적공장, 생성시간, 경과시간 
UCLASS()
class RADIANT_API AEnemyManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;
	
	//필요속성 : 적공장, 생성시간, 경과시간 
	UPROPERTY(EditDefaultsOnly, Category = "Enemy Factory")
	TSubclassOf<class AEnemy> enemyFactory;

	UPROPERTY(EditAnywhere, Category="Setting")
	float createTime = 1;

	UPROPERTY()
	float currentTime = 0;

	UPROPERTY(EditDefaultsOnly, Category = "EnemyIMG Factory")
	TSubclassOf<class AEnemyIMG> enemyIMGFactory;
};
