 // Fill out your copyright notice in the Description page of Project Settings.


#include "MoveToPoint.h"

// Sets default values for this component's properties
UMoveToPoint::UMoveToPoint()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMoveToPoint::BeginPlay()
{
	Super::BeginPlay();

	me=GetOwner();

}


// Called every frame
void UMoveToPoint::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMoveToPoint::Move()
{
	//PRINTLOG(TEXT("MoveState %d"), (int)m_state);
	if (m_state == EMoveState::Idle)
	{
		Idle();
	}
	else if (m_state == EMoveState::Moving)
	{
		Moving();
	}
	else if(m_state == EMoveState::Attached)
	{
		Attached();
	}
	else
	{
		NoWay();
	}
}

void UMoveToPoint::SetPath(TArray<AActor*> path)
{
	pathActors = path;

	if (pathActors.Num() > 0)
	{
		pathIdx = 0;
		toLoc = pathActors[pathIdx]->GetActorLocation();
	}
}

void UMoveToPoint::Idle()
{
	curTime += GetWorld()->DeltaTimeSeconds;

	if (curTime >= idleDelayTime)
	{
		m_state = EMoveState::Moving;
	}
}

void UMoveToPoint::Moving()
{
	//이동
	FVector myLoc = me->GetActorLocation();
	myLoc.Z = 20;
	FVector dir = toLoc-me->GetActorLocation();
	dir.Normalize();
	myLoc = myLoc + dir * velocity * GetWorld()->DeltaTimeSeconds;
	/*
	FVector myLoc = me->GetActorLocation();
	myLoc.Z = 20;
	myLoc = FMath::Lerp(myLoc, toLoc, 0.3*GetWorld()->DeltaTimeSeconds);
	*/
	me->SetActorLocation(myLoc);

	//목적지 거리 검사 -> Attached
	//myLoc.Z = 20;
	float dist = FVector::Dist(myLoc, toLoc);
	//PRINTLOG(TEXT("Attached dist = %f"),dist);
	if (dist < 10)
	{
		m_state = EMoveState::Attached;
		pathIdx++;
	}
}

void UMoveToPoint::Attached()
{
	// 다음 목적지로 변경
	if (pathActors.Num() > pathIdx)
	{
		toLoc = pathActors[pathIdx]->GetActorLocation();
		m_state = EMoveState::Moving;
		//PRINTLOG(TEXT("Next Loc = %s"),*(pathActors[pathIdx]->GetName()));
	}
	else
	{
		m_state = EMoveState::NoWay;
	}
}

void UMoveToPoint::NoWay()
{

}

