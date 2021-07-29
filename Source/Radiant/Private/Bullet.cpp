// Fill out your copyright notice in the Description page of Project Settings.

#include <Components/SphereComponent.h>
#include "Bullet.h"
#include "RadiantGameModeBase.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = collision;
	
	collision->SetCollisionProfileName(TEXT("Bullet"));
	collision->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnBeginOverlap);
	collision->OnComponentHit.AddDynamic(this, &ABullet::OnBulletHit);
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 자식 클래스에서 오버라이딩해서 사용
}


void ABullet::OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

}