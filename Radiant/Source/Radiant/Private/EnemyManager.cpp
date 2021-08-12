// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyManager.h"
#include "Enemy.h"
#include "RadiantGameModeBase.h"
#include "GameStateController.h"
#include "EnemyIMG.h"
#include "MoveToPoint.h"

// Sets default values
AEnemyManager::AEnemyManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyManager::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());
	
}
// Called every frame
void AEnemyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (gameModeBase->gameStateController->GetState() == EGameState::Build)
	{
		currentTime += DeltaTime;

		if (currentTime > createTime)
		{
			auto enemy = GetWorld()->SpawnActor<AEnemyIMG>(enemyIMGFactory, GetTransform());
			enemy->moveToPoint->SetPath(pathActors);

			currentTime = 0;
		}
	}
	else if (gameModeBase->gameStateController->GetState() == EGameState::Playing)
	{
		// �����ð��� �ѹ��� ���� ����� �ʹ�.
		// 1. �ð��� �귶���ϱ�
		currentTime += DeltaTime;
		// 2. �����ð��� ������
	    //-> ���� ����ð��� �����ð��� �ʰ��Ͽ��ٸ�
   
		if (currentTime > createTime)
		{
			// 3. ���� ����� �ʹ�.(Spawn)
			auto enemy = GetWorld()->SpawnActor<AEnemy>(enemyFactory, GetTransform());
			enemy->moveToPoint->SetPath(pathActors);
		
			currentTime = 0;
		}
	}
}
	
AActor* AEnemyManager::SpawnEnemy()
{
	auto enemy = GetWorld()->SpawnActor<AEnemy>(enemyFactory, GetTransform());
	//enemy->moveToPoint->pathActors = pathActors;
	// enemy->movetopoint->SetPath();
	enemy->moveToPoint->SetPath(pathActors);
	return enemy;
}

