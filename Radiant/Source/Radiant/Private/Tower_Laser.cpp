// Fill out your copyright notice in the Description page of Project Settings.

#include "Tower_Laser.h"
#include <Components/SphereComponent.h>
#include "Enemy.h"
#include "Bullet_Laser.h"
#include "RadiantGameModeBase.h"
#include "ObjectPool.h"



// Sets default values
ATower_Laser::ATower_Laser()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	range = 200;

	collision = CreateDefaultSubobject<USphereComponent>(TEXT("Range"));

	collision->SetSphereRadius(470);
	collision->SetCollisionProfileName("TowerRange");
	RootComponent = collision;

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));

	bodyMesh->SetRelativeScale3D(FVector(0.7, 0.7, 0.7));
	bodyMesh->SetupAttachment(collision);


	//충돌 이벤트 추가
	collision->OnComponentBeginOverlap.AddDynamic(this, &ATower_Laser::OnRangeOverlapBegin);
	collision->OnComponentEndOverlap.AddDynamic(this, &ATower_Laser::OnRangeOverlapEnd);

}

// Called when the game starts or when spawned
void ATower_Laser::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void ATower_Laser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 타겟팅 중이면 공격한다.
	if (bTargeting == true)
	{
		curTime += DeltaTime;

		// 공격 대기시간
		if (curTime > reloadTime)
		{
			Fire();
			curTime = 0;
		}
	}
}

void ATower_Laser::Fire()
{
	//PRINTLOG(TEXT("Fire"));
	if (gameModeBase)
	{
		ABullet_Laser* bullet = Cast<ABullet_Laser>(gameModeBase->objectPool->GetBullet(ETowerType::Laser));

		if (bullet == nullptr)
		{
			return;
		}

		// 생성 위치 설정
		bullet->SetActorLocation(GetActorLocation());

		FVector dir = FVector::ZeroVector;
		if (target)
		{
			dir = target->GetActorLocation() - GetActorLocation();
			dir.Normalize();
		}
		else
		{
			dir = GetActorForwardVector();
		}

		// 방향 설정
		bullet->SetDirection(dir);
	}
}

void ATower_Laser::OnRangeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{	
	//PRINTLOG(TEXT("BeginOverlap"));

	//SetTarget
	if (bTargeting == false)
	{
		auto enemy = Cast<AEnemy>(OtherActor);
		if (enemy)
		{
			//PRINTLOG(TEXT("BeginOverlap_target"));
			target = enemy;
			curTime = reloadTime;
			bTargeting = true;
		}
	}

}

void ATower_Laser::OnRangeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

	if (OtherActor == target)
	{
		//PRINTLOG(TEXT("EndOverlap"));
		//Reset Target
		target = nullptr;
		bTargeting = false;
	}
}
