// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPool.h"
#include "RadiantGameModeBase.h"
#include "Bullet_Laser.h"


// Sets default values for this component's properties
UObjectPool::UObjectPool()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	bulletSlowPoolSize = 20;
}


// Called when the game starts
void UObjectPool::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast<ARadiantGameModeBase>(GetOwner());

	if (bulletSlowFactory)
	{
		for (int i = 0; i < bulletSlowPoolSize; i++)
		{
			ABullet* bullet = Cast<ABullet>(CreateBullet(ETowerType::Slow));

			if (bullet)
			{
				AddBullet(bullet);
			}
		}
	}

	if (bulletSlowFactory)
	{
		for (int i = 0; i < bulletSlowPoolSize; i++)
		{
			ABullet* bullet = Cast<ABullet>(CreateBullet(ETowerType::Laser));

			if (bullet)
			{
				AddBullet(bullet);
			}
		}
	}
}


// Called every frame
void UObjectPool::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UObjectPool::SetBulletActive(ABullet* bullet, bool isActive)
{
	bullet->SetActorHiddenInGame(!isActive);
	bullet->SetActorEnableCollision(isActive);
	bullet->SetActorTickEnabled(isActive);
}

// 탄창에 총알을 추가해주는 함수
void UObjectPool::AddBullet(ABullet* bullet)
{
	auto type = bullet->GetType();

	if (type == ETowerType::Basic)
	{

	}
	else if (type == ETowerType::Laser)
	{
		bulletLaserPool.AddUnique(Cast<ABullet_Laser>(bullet));
	}
	else if (type == ETowerType::Slow)
	{
		bulletSlowPool.AddUnique(Cast<ABullet_Slow>(bullet));
	}

	//총알 비활성화
	SetBulletActive(bullet, false);
}

// 탄창(풀)에서 총알을 하나 빼오기
ABullet* UObjectPool::GetBullet(ETowerType type)
{
	if (type == ETowerType::Basic)
	{

	}
	else if (type == ETowerType::Laser)
	{
		if (bulletLaserPool.Num() < 1)
		{
			return nullptr;
		}
		ABullet* bullet = bulletLaserPool.Pop();
		SetBulletActive(bullet, true);
		return bullet;
	}
	else if (type == ETowerType::Slow)
	{
		if (bulletSlowPool.Num() < 1)
		{
			return nullptr;
		}
		ABullet* bullet = bulletSlowPool.Pop();
		SetBulletActive(bullet, true);
		return bullet;
	}

	return nullptr;
}

ABullet* UObjectPool::CreateBullet(ETowerType type)
{
	if (type == ETowerType::Basic)
	{

	}
	else if (type == ETowerType::Laser)
	{
		// 1. 총알공장에서 총알을 만든다.
		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		auto bullet = GetWorld()->SpawnActor<ABullet_Laser>(bulletLaserFactory, FVector::ZeroVector, FRotator::ZeroRotator, Param);

		if (bullet)
		{
			AddBullet(bullet);
		}
	}
	else if (type == ETowerType::Slow)
	{
		// 1. 총알공장에서 총알을 만든다.
		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		auto bullet = GetWorld()->SpawnActor<ABullet_Slow>(bulletSlowFactory, FVector::ZeroVector, FRotator::ZeroRotator, Param);

		if (bullet)
		{
			AddBullet(bullet);
		}
	}
	return nullptr;
}


void UObjectPool::SpawnWall(FVector loc)
{
	//PRINTLOG(TEXT("SpawnWALL"));

	FRotator rot = FRotator::ZeroRotator;

	FActorSpawnParameters Param;
	Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	if(wallFactory)
	{
		auto wall = GetWorld()->SpawnActor<AWall>(wallFactory, loc + FVector(0, 0, 70), rot, Param);
	}

	//TODO 설치 가능한 타일 수 0인 경우에
	//gameModeBase->SetTileSelect(false);
}

void UObjectPool::GenerateStage(TArray<FVector> locations)
{
	SpawnTilemap();

	for (int i = 0; i < locations.Num(); i++)
	{
		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		FRotator rot = FRotator::ZeroRotator;

		if (wallFactory)
		{
			auto wall = GetWorld()->SpawnActor<AWall>(wallFactory, locations[i], rot, Param);
		}
	}
}

void UObjectPool::SpawnTilemap()
{
	FActorSpawnParameters Param;
	Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	if (tilemapFactory)
	{
		auto tilemap = GetWorld()->SpawnActor<ATilemap>(tilemapFactory, tileLoc, tileRot, Param);
	}

}