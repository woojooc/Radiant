// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower_Slow.h"
#include <Components/SphereComponent.h>
#include "Enemy.h"
#include "Bullet_Slow.h"
#include "RadiantGameModeBase.h"
#include "ObjectPool.h"

// Sets default values
ATower_Slow::ATower_Slow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	range = 100;

	collision = CreateDefaultSubobject<USphereComponent>(TEXT("Range"));
	collision->SetSphereRadius(270);
	collision->SetCollisionProfileName("TowerRange");
	RootComponent = collision;

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	// mesh cube
	// material
	bodyMesh->SetRelativeScale3D(FVector(0.7, 0.7, 0.7));
	bodyMesh->SetupAttachment(collision);

	collision->OnComponentBeginOverlap.AddDynamic(this, &ATower_Slow::OnRangeOverlapBegin);
	collision->OnComponentEndOverlap.AddDynamic(this, &ATower_Slow::OnRangeOverlapEnd);
}

// Called when the game starts or when spawned
void ATower_Slow::BeginPlay()
{
	Super::BeginPlay();
	
	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void ATower_Slow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bTargeting == true)
	{
		curTime += DeltaTime;

		if (curTime > reloadTime)
		{
			Fire(target->GetActorLocation());
			curTime = 0;
		}
	}
}

void ATower_Slow::OnRangeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//PRINTLOG(TEXT("BeginOverlap"));

	//SetTarget
	if (bTargeting == false)
	{
		auto enemy = Cast<AEnemy>(OtherActor);
		if (enemy)
		{
			PRINTLOG(TEXT("BeginOverlap_target"));
			target = enemy;
			Fire(target->GetActorLocation());
			bTargeting = true;
		}
	}
}

void ATower_Slow::OnRangeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	PRINTLOG(TEXT("EndOverlap"));

	//Reset Target
	target = nullptr;
	bTargeting = false;
}

void ATower_Slow::Fire(FVector dir)
{
	PRINTLOG(TEXT("Fire"));
	if (gameModeBase)
	{
		auto bullet = Cast<ABullet_Slow>(gameModeBase->objectPool->GetBullet(ETowerType::Slow));
	
		if (bullet == nullptr)
		{
			return;
		}

		bullet->SetActorLocation(GetActorLocation());

		// TODO dir = target-me normaloze
		bullet->SetDirection(target->GetActorLocation());
	}
}