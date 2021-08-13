// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPool.h"
#include "RadiantGameModeBase.h"
#include "Bullet_Laser.h"
#include "Bullet_Basic.h"
#include "StageLoad.h"


// Sets default values for this component's properties
UObjectPool::UObjectPool()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	bulletSlowPoolSize = 20;
	bulletBaiscPoolSize = 20;
	bulletLaserPoolSize = 100;
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

	if (bulletLaserFactory)
	{
		for (int i = 0; i < bulletLaserPoolSize; i++)
		{
			ABullet* bullet = Cast<ABullet>(CreateBullet(ETowerType::Laser));

			if (bullet)
			{
				AddBullet(bullet);
			}
		}
	}

	if (bulletBasicFactory)
	{
		for (int i = 0; i < bulletBaiscPoolSize; i++)
		{
			ABullet* bullet = Cast<ABullet>(CreateBullet(ETowerType::Basic));

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

// źâ�� �Ѿ��� �߰����ִ� �Լ�
void UObjectPool::AddBullet(ABullet* bullet)
{
	auto type = bullet->GetType();

	if (type == ETowerType::Basic)
	{
		bulletBasicPool.AddUnique(Cast<ABullet_Basic>(bullet));

	}
	else if (type == ETowerType::Laser)
	{
		bulletLaserPool.AddUnique(Cast<ABullet_Laser>(bullet));
	}
	else if (type == ETowerType::Slow)
	{
		bulletSlowPool.AddUnique(Cast<ABullet_Slow>(bullet));
	}

	//�Ѿ� ��Ȱ��ȭ
	SetBulletActive(bullet, false);
}

// źâ(Ǯ)���� �Ѿ��� �ϳ� ������
ABullet* UObjectPool::GetBullet(ETowerType type)
{
	if (type == ETowerType::Basic)
	{
		if (bulletBasicPool.Num() < 1)

		{
		    return nullptr;
	
		}
	    ABullet* bullet = bulletBasicPool.Pop();
		SetBulletActive(bullet, true);
		return bullet;
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
		//PRINTLOG(TEXT("%d"), bulletSlowPool.Num());
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
		// 1. �Ѿ˰��忡�� �Ѿ��� �����.
		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		auto bullet = GetWorld()->SpawnActor<ABullet_Basic>(bulletBasicFactory, FVector::ZeroVector, FRotator::ZeroRotator, Param);

		if (bullet)
		{
			AddBullet(bullet);
		}
		
	}
	else if (type == ETowerType::Laser)
	{
		// 1. �Ѿ˰��忡�� �Ѿ��� �����.
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
		// 1. �Ѿ˰��忡�� �Ѿ��� �����.
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

	//TODO ��ġ ������ Ÿ�� �� 0�� ��쿡
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

TArray<AActor*> UObjectPool::IntroWallGenerate()
{
	TArray<FVector> locations = gameModeBase->stageloadCompo->GetLocations();
	TArray<AActor*> walls;

	for (int i = 0; i < locations.Num(); i++)
	{
		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		FRotator rot = FRotator::ZeroRotator;

		if (wallFactory)
		{
			
			float height = FMath::RandRange(150,500);
			FVector randLoc = locations[i];
			randLoc.Z = height;

			auto wall = GetWorld()->SpawnActor<AWall>(wallFactory, randLoc, rot, Param);
			if (i == locations.Num() - 1)
			{
				wall->isLast = true;
			}

			walls.Add(wall);
		}
	}

	return walls;
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