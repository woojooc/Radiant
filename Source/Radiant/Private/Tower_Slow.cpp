// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower_Slow.h"

// Sets default values
ATower_Slow::ATower_Slow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetRelativeScale3D(FVector(0.7, 0.7, 0.7));
}

// Called when the game starts or when spawned
void ATower_Slow::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATower_Slow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

