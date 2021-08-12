// Fill out your copyright notice in the Description page of Project Settings.


#include "RaCameraActor.h"
#include "Enemy.h"

ARaCameraActor::ARaCameraActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARaCameraActor::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (m_state == ECameraState::Targetting)
	{
		Targetting();
	}
	else if (m_state == ECameraState::Trace)
	{
		Trace();
	}
}

bool ARaCameraActor::isTargeting()
{
	if (target == nullptr)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void ARaCameraActor::Targetting()
{
	//FVector(-32.424831, -684.524780, 214.163651), FRotator(-16.794231, 441.187500, 0.000179)
	FVector camLoc = FMath::Lerp(GetActorLocation(), target->GetActorLocation() + FVector(0,-88, -244) , 6 * GetWorld()->DeltaTimeSeconds);
	SetActorLocation(camLoc);

	FVector direction = target->GetActorLocation() + FVector(0, -88, -244) - GetActorLocation();
	direction.Normalize();
	FRotator camRot = FMath::Lerp(GetActorRotation(), direction.ToOrientationRotator() + FRotator(18,0,0), 6 * GetWorld()->DeltaTimeSeconds);
	SetActorRotation(camRot);

	float dist = FVector::Dist(GetActorLocation(), target->GetActorLocation());
	if (dist < 500)
	{
		targetOffset = GetActorLocation() - target->GetActorLocation();
		m_state = ECameraState::Trace;
	}

	/*
	FVector camLoc = FMath::Lerp(GetActorLocation(), targetPos->GetComponentLocation(), 6*GetWorld()->DeltaTimeSeconds);
	SetActorLocation(camLoc);
	
	//target->GetActorForwardVector().ToOrientationRotator()
	FRotator camRot = FMath::Lerp(GetActorRotation(), targetPos->GetForwardVector().ToOrientationRotator(),6*GetWorld()->DeltaTimeSeconds );
	SetActorRotation(camRot);

	float dist = FVector::Dist(GetActorLocation(), targetPos->GetComponentLocation());
	if (dist < 10)
	{
		m_state = ECameraState::Trace;
	}
	*/


}

void ARaCameraActor::Trace()
{
	/*
	FVector camLoc = FMath::Lerp(GetActorLocation(), target->GetActorLocation() + FVector(0, -88, -244), 6 * GetWorld()->DeltaTimeSeconds);
	SetActorLocation(camLoc);

	FVector direction = target->GetActorLocation() + FVector(0, -88, -244) - GetActorLocation();
	direction.Normalize();
	FRotator camRot = FMath::Lerp(GetActorRotation(), direction.ToOrientationRotator() + FRotator(18, 0, 0), 6 * GetWorld()->DeltaTimeSeconds);
	SetActorRotation(camRot);
	// + FRotator(-50,90,0)
	SetActorLocation(targetPos->GetComponentLocation());
	FRotator camRot = FMath::Lerp(GetActorRotation(), targetPos->GetForwardVector().ToOrientationRotator(), 6 * GetWorld()->DeltaTimeSeconds);
	SetActorRotation(camRot);
	*/
	curTime += GetWorld()->DeltaTimeSeconds;
	if (bUp)
	{
		SetActorLocation(GetActorLocation() + FVector(0,0,5)*GetWorld()->DeltaTimeSeconds);
		if (curTime > upTime)
		{
			// 위로 올라가기
			bUp = false;
		}
	}

	if (bUp == false && curTime < 2)
	{
		// 첫번째 path바라보고 한바퀴 돌기 
		FVector dir = pathActors[0]->GetActorLocation() - GetActorLocation();
		dir.Normalize();
		FRotator myRot = FMath::Lerp(GetActorRotation(),dir.ToOrientationRotator(),2*GetWorld()->DeltaTimeSeconds );
		SetActorRotation(myRot);

		FVector center = pathActors[0]->GetActorLocation() - GetActorLocation();
		radius = FVector::Dist(pathActors[0]->GetActorLocation(), GetActorLocation());
		height = GetActorLocation().Z;
	}


	if(curTime > 2)
	{
		rad += GetWorld()->DeltaTimeSeconds;
		if (rad > 2 * PI)
		{
			rad -= 2*PI;
		}

		FVector newLoc = FVector(FMath::Cos(rad)* radius, FMath::Sin(rad) * radius, height);
		SetActorLocation(newLoc);

		FVector dir = pathActors[0]->GetActorLocation() - GetActorLocation();
		dir.Normalize();
		SetActorRotation(dir.ToOrientationRotator());
	}
	
}

///*
void ARaCameraActor::SetTarget(AActor* t)
{
	target = t;

	/*
	auto enemy = Cast<AEnemy>(t);
	if (enemy)
	{
		targetPos = enemy->GetAttachPosition();
	}
	*/
}
//*/