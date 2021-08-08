// Fill out your copyright notice in the Description page of Project Settings.


#include "DestroyZone.h"
#include <Components/BoxComponent.h>
#include "Bullet.h"
#include "RadiantGameModeBase.h"
#include "ObjectPool.h"

// Sets default values
ADestroyZone::ADestroyZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));

	collision->OnComponentHit.AddDynamic(this, &ADestroyZone::OnZoneHit);
}

// Called when the game starts or when spawned
void ADestroyZone::BeginPlay()
{
	Super::BeginPlay();
	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void ADestroyZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADestroyZone::OnZoneHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	auto bullet = Cast<ABullet>(OtherActor);
	
	if (bullet)
	{
		gameModeBase->objectPool->AddBullet(bullet);
	}
}