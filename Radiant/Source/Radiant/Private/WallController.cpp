// Fill out your copyright notice in the Description page of Project Settings.


#include "WallController.h"
#include "../Public/Wall.h"

// Sets default values for this component's properties
UWallController::UWallController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWallController::BeginPlay()
{
	Super::BeginPlay();

	Idle();
	
}


// Called every frame
void UWallController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (m_state == EWallState::Idle)
	{
		Idle();
		return;
	}

	if(m_state == EWallState::End)
	{
		return;
	}

	Shake();

	curTemp2 += GetWorld()->DeltaTimeSeconds;
	if (curTemp2 > fallingTemp)
	{
		Falling();
		curTemp2 = 0;
	}
}

void UWallController::Idle()
{
	for (int i = 0; i < walls.Num(); i++)
	{
		auto wall = Cast<AWall>(walls[i]);
		wall->bShake = true;
	}
}

void UWallController::Shake()
{
	curTemp += GetWorld()->DeltaTimeSeconds;
	if (curTemp > shakeTemp)
	{
		SetRandLoc();
		curTemp = 0;
	}
}

void UWallController::Falling()
{
	auto wall = Cast<AWall>(walls[idx]);
	if (wall)
	{
		wall->SetStaticWall(false);
		idx++;
		if (idx >= walls.Num())
		{
			m_state = EWallState::End;
		}
	}
}

void UWallController::End()
{

}

void UWallController::SetRandLoc()
{
	for (int i = 0; i < walls.Num(); i++)
	{
		float minX = walls[i]->GetActorLocation().X - shakeAmplitude;
		float maxX = walls[i]->GetActorLocation().X + shakeAmplitude;
		float minY = walls[i]->GetActorLocation().Y - shakeAmplitude;
		float maxY = walls[i]->GetActorLocation().Y + shakeAmplitude;
		float minZ = walls[i]->GetActorLocation().Z - shakeAmplitude;
		float maxZ = walls[i]->GetActorLocation().Z + shakeAmplitude;

		float randX = FMath::RandRange(minX, maxX);
		float randY = FMath::RandRange(minY, maxY);
		float randZ = FMath::RandRange(minZ, maxZ);

		auto wall = Cast<AWall>(walls[i]);

		if (wall->isShake())
		{
			walls[i]->SetActorLocation(FVector(randX, randY, randZ));
		}
	}
}

void UWallController::DestroyAll()
{
	for (int i = 0; i < walls.Num(); i++)
	{
		walls[i]->Destroy();
	}
	m_state = EWallState::End;
}

