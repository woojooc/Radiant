// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet_Slow.h"

// Sets default values
ABullet_Slow::ABullet_Slow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABullet_Slow::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABullet_Slow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 이동함수 구현
}

void ABullet_Slow::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 에너미와 충돌 처리
	
	// 충돌대상 에너미인지 확인
	// 에너미가 맞다면 
	// 에너미 에너지 - damage

}

