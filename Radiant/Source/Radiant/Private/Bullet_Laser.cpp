// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet_Laser.h"
#include <Components/StaticMeshComponent.h>
#include <Components/SphereComponent.h>
#include "RadiantGameModeBase.h"
#include "ObjectPool.h"
#include "Enemy.h"


ABullet_Laser::ABullet_Laser()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(collision);
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	towerType = ETowerType::Laser;

}
void ABullet_Laser::BeginPlay()
{
	Super::BeginPlay();


}

void ABullet_Laser::Tick(float DeltaTime)
{
	// 이동함수 구현
	FVector p = GetActorLocation() + dir * speed * DeltaTime;
	SetActorLocation(p, true);
}

void ABullet_Laser::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto enemy = Cast<AEnemy>(OtherActor);

	if (enemy)
	{

		enemy->GetDamaged_Laser(40);
		// 총알 회수
		gameModeBase->objectPool->AddBullet(this);
	}
}

void ABullet_Laser::OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

}
