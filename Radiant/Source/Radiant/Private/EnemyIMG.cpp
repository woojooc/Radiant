// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyIMG.h"
#include <Particles/ParticleSystem.h>
#include "EnemyMove.h"
#include <Components/CapsuleComponent.h>
#include <Particles/ParticleSystemComponent.h>

// Sets default values
AEnemyIMG::AEnemyIMG()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	enemyMove = CreateDefaultSubobject<UEnemyMove>(TEXT("EnemyMove"));

	GetCapsuleComponent()->SetCapsuleRadius(20);
	GetCapsuleComponent()->SetCapsuleHalfHeight(20);

	auto planeRed = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Red"));
	planeRed->SetupAttachment(GetCapsuleComponent());
	planeRed->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	auto planeWh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("White"));
	planeWh->SetupAttachment(planeRed);
	planeWh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	auto particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Aurora"));
	particle->SetupAttachment(planeRed);

#pragma region Mesh, Mat

///*
	ConstructorHelpers::FObjectFinder<UStaticMesh> planeMesh(TEXT("StaticMesh'/Engine/BasicShapes/Plane.Plane'"));
	if (planeMesh.Succeeded())
	{
		planeRed->SetStaticMesh(planeMesh.Object);
	}
	planeRed->SetRelativeScale3D(FVector(0.4,0.4,0.4));
	planeRed->SetRelativeRotation(FRotator(0,90,0));

	ConstructorHelpers::FObjectFinder<UMaterial> planeRedMat(TEXT("Material'/Game/WJung/Resources/img/Mat_EnemyIMG.Mat_EnemyIMG'"));
	if (planeRedMat.Succeeded())
	{
		planeRed->SetMaterial(0,planeRedMat.Object);
	}


	ConstructorHelpers::FObjectFinder<UStaticMesh> planeMeshB(TEXT("StaticMesh'/Engine/BasicShapes/Plane.Plane'"));
	if (planeMeshB.Succeeded())
	{
		planeWh->SetStaticMesh(planeMeshB.Object);
	}
	planeWh->SetRelativeScale3D(FVector(1.01, 1.01, 1.01));
	planeWh->SetRelativeLocation(FVector(0,0,-0.1));
	ConstructorHelpers::FObjectFinder<UMaterial> planeWhMat(TEXT("Material'/Game/WJung/Resources/img/Mat_EnemyIMG_WH.Mat_EnemyIMG_WH'"));
	if (planeWhMat.Succeeded())
	{
		planeWh->SetMaterial(0,planeWhMat.Object);
	}

	ConstructorHelpers::FObjectFinder<UParticleSystem> temp(TEXT("ParticleSystem'/Game/InfinityBladeEffects/Effects/FX_Archive/Pat_Aurora_Enemy.Pat_Aurora_Enemy'"));
	if (temp.Succeeded())
	{
		particle->SetTemplate(temp.Object);
	}

//*/
#pragma endregion
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

