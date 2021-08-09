// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyIMG.h"
#include <Particles/ParticleSystem.h>
#include "EnemyMove.h"

// Sets default values
AEnemyIMG::AEnemyIMG()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	enemyMove = CreateDefaultSubobject<UEnemyMove>(TEXT("EnemyMove"));

}

// Called when the game starts or when spawned
void AEnemyIMG::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyIMG::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

