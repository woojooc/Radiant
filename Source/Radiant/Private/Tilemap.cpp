// Fill out your copyright notice in the Description page of Project Settings.


#include "Tilemap.h"

// Sets default values
ATilemap::ATilemap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATilemap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATilemap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

