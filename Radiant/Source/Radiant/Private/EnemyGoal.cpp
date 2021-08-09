// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyGoal.h"
#include <Components/BoxComponent.h>
#include "Enemy.h"
#include "EnemyIMG.h"
#include <Particles/ParticleSystemComponent.h>

// Sets default values
AEnemyGoal::AEnemyGoal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = collision;
	collision->SetCollisionProfileName(TEXT("OverlapAll"));
	collision->SetWorldScale3D(FVector(0.5,0.5,0.5));

	auto plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
	plane->SetupAttachment(collision);
	auto particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Aurora"));
	particle->SetupAttachment(collision);
	
	//bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	//bodyMesh->SetupAttachment(RootComponent);
	//bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Engine/BasicShapes/Plane.Plane'"));
	if (mesh.Succeeded())
	{
		plane->SetStaticMesh(mesh.Object);
		plane->SetRelativeRotation(FRotator(0,90,0));
	}
	ConstructorHelpers::FObjectFinder<UMaterial> mat(TEXT("Material'/Game/WJung/Resources/img/Mat_Goal.Mat_Goal'"));
	if (mat.Succeeded())
	{
		plane->SetMaterial(0,mat.Object);
	}

	ConstructorHelpers::FObjectFinder<UParticleSystem> temp(TEXT("ParticleSystem'/Game/InfinityBladeEffects/Effects/FX_Archive/Pat_Aurora_Enemy.Pat_Aurora_Enemy'"));
	if (temp.Succeeded())
	{
		particle->SetTemplate(temp.Object);
	}

	collision->OnComponentBeginOverlap.AddDynamic(this,&AEnemyGoal::OnOverlapBegin);
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

void AEnemyGoal::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	auto enemy = Cast<AEnemy>(OtherActor);
	if (enemy)
	{
		enemy->Destroy();

		// ∂Û¿Ã«¡ --
		return;
	}

	auto enemyIMG = Cast<AEnemyIMG>(OtherActor);
	if (enemyIMG)
	{
		enemyIMG->Destroy();
		return;
	}
}

