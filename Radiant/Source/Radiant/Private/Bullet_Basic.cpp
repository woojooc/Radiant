// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet_Basic.h"
#include <Components/SphereComponent.h>
#include <Components/StaticMeshComponent.h>
#include "Enemy.h"
#include "RadiantGameModeBase.h"
#include "ObjectPool.h"


ABullet_Basic::ABullet_Basic()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(collision);
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	towerType = ETowerType::Basic;

}
void ABullet_Basic::BeginPlay()
{
	Super::BeginPlay();


}

void ABullet_Basic::Tick(float DeltaTime)
{
	// 이동함수 구현
	FVector p = GetActorLocation() + dir * speed * DeltaTime;
	SetActorLocation(p, true);
}

void ABullet_Basic::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto enemy = Cast<AEnemy>(OtherActor);

	if (enemy)
	{

		enemy->GetDamaged(30);
		// 총알 회수
		gameModeBase->objectPool->AddBullet(this);
	}
}

void ABullet_Basic::OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

}
