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
	
	// target ã��
	// target = UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyGoal::StaticClass());
	 target = Cast<AEnemyGoal>(UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyGoal::StaticClass()));

	// AIController �Ҵ�
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

	// �Ʒ��� ��� �̵��ϰ� �ʹ�.
	// P = P0 + vt
	// FVector v = FVector::RightVector * speed;
										 
						 	
	// Target �� �������� �̵��ϱ�
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
	// AI�� ��ã�� ����� �̿��� �̵�


	

}

void UEnemyMove::Move()
{
	if (ai)
	{
		ai->MoveToActor(target);
	}
}

