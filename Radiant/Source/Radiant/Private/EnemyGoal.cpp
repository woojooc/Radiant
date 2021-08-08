// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyGoal.h"
#include <Components/BoxComponent.h>

// Sets default values
AEnemyGoal::AEnemyGoal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = collision;
	collision->SetCollisionProfileName(TEXT("OverlapAll"));

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(RootComponent);
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void AEnemyGoal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyGoal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

