// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyMove.h"
#include "Enemy.h"
#include "EnemyIMG.h"
#include <Kismet/GameplayStatics.h>
#include "EnemyGoal.h"
#include <AIController.h>
#include <Math/Rotator.h>
#include <GameFramework/Pawn.h>
#include <GameFramework/CharacterMovementComponent.h>

// Sets default values for this component's properties
UEnemyMove::UEnemyMove()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemyMove::BeginPlay()
{
	Super::BeginPlay();

	me = GetOwner();
	
	// target 찾기
	// target = UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyGoal::StaticClass());
	 target = Cast<AEnemyGoal>(UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyGoal::StaticClass()));

	// AIController 할당
	AEnemy* temp = Cast<AEnemy>(me);
	if (temp)
	{
		ai = Cast<AAIController>(temp->GetController());
	}
	AEnemyIMG* tempIMG = Cast<AEnemyIMG>(me);
	if (tempIMG)
	{
		ai = Cast<AAIController>(tempIMG->GetController());

	}

}


// Called every frame
void UEnemyMove::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// 아래로 계속 이동하고 싶다.
	// P = P0 + vt
	// FVector v = FVector::RightVector * speed;
										 
						 	
	// Target 쪽 방향으로 이동하기
// 	if (target)
// 	{
// 		v = target->GetActorLocation() - me->GetActorLocation();
// 		v.Normalize();
// 		v *= speed;
// 	}
// 									 		
// 		v = target->GetActorLocation() - me->GetActorLocation();
// 		v.Normalize();
// 		v *= speed;
// 									 
// 		FVector P = me->GetActorLocation() + v * DeltaTime;
// 		me->SetActorLocation(P, true);
/*
	FVector direction = target->GetActorLocation() - me->GetActorLocation();
	direction.Normalize();

	FVector P0 = me->GetActorLocation();
	FVector p = P0 + direction * speed * GetWorld()->DeltaTimeSeconds;

	me->SetActorLocation(p, true);
*/


	//ai = Cast<AAIController>(me->GetController());
	// AI의 길찾기 기능을 이용해 이동


	

}

void UEnemyMove::Move()
{
	if (ai)
	{
		ai->MoveToActor(target);
	}
}

