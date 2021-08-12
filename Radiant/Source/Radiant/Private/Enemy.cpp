// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include <Components/BoxComponent.h>
#include <Components/CapsuleComponent.h>
#include "EnemyMove.h"
#include "Bullet.h"
#include "Bullet_Basic.h"
#include "Bullet_Laser.h"
#include "Bullet_Slow.h"
#include "RadiantGameModeBase.h"
#include <GameFramework/CharacterMovementComponent.h>
#include <GameFramework/Character.h>
#include <Components/WidgetComponent.h>
#include <Engine/EngineTypes.h>
#include "EnemyhpBar.h"
#include "GameStateController.h"
#include "MoveToPoint.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	collision->SetupAttachment(GetCapsuleComponent());
	collision->SetCollisionProfileName(TEXT("OverlapAll"));

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(RootComponent);
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	enemyMove = CreateDefaultSubobject<UEnemyMove>(TEXT("EnemyMove"));
	moveToPoint = CreateDefaultSubobject<UMoveToPoint>(TEXT("MoveToPoint"));
	

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	HealthWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBar"));
	HealthWidgetComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

 
// 	UCharacterMovementComponent* MovementPtr = Cast<UCharacterMovementComponent>(Enemy->GetCharacterMovement());
// 	MovementPtr->MaxWalkSpeed = speed;

	/*CharacterMovement->MaxWalkSpeed = WalkSpeed;*/
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*UpdatecurrentenemyHp();*/
	if(gameModeBase->gameStateController->GetState() == EGameState::Intro)
	{
		//PRINTLOG(TEXT("MoveToPoint Move"));
		moveToPoint->Move();
	}
	else
	{
		//PRINTLOG(TEXT("EnemyMove Move"));
		enemyMove->Move();
	}
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::OnTriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

void AEnemy::GetDamaged(int damage)
{
//	enemyHp -= damage;
// 	if (enemyHp <= 0)
// 	{
// 		Destroy();
// 	}
}

void AEnemy::Slowed()
{
	

// 	if (WalkSpeed <= 50)
// 	{
// 		return;
// 	}
// 	else
// 	{
// 		WalkSpeed -= 50;
// 	}
// 
// 	if (enemyMove->speed <= 50)
// 	{
// 		return;
// 	}
// 	else
// 	{
// 		enemyMove->speed -= 50;
// 	}
}

void AEnemy::GetDamaged_Laser(int damage)
{
	PRINTLOG(TEXT("%d"), enemyHp);

	enemyHp -= damage;
	
	PRINTLOG(TEXT("%d"), enemyHp);
	if (enemyHp <= 0)
	{
		Destroy();
	}
}


void AEnemy::GetDamaged_Basic(int damage)
{
	enemyHp -= damage;

	if (enemyHp <= 0)
	{
		Destroy();
	}
}

FVector AEnemy::GetTargetPoint()
{
	return bodyMesh->GetComponentLocation();
}

// float AEnemy::GetenemyHp()
// {
// 	
// 	return enemyHp;
// }

// float AEnemy::GetcurrentenemyHp()
// {
// 
// 	return currentenemyHp;
// }
// 
// void AEnemy::UpdatecurrentenemyHp(int damage)
// {
// 	currentenemyHp = enemyHp - damage;
// }

