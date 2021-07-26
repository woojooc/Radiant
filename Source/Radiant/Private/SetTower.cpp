// Fill out your copyright notice in the Description page of Project Settings.


#include "SetTower.h"
#include "Tower_Slow.h"
#include "RadiantGameModeBase.h"

// Sets default values for this component's properties
USetTower::USetTower()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USetTower::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast<ARadiantGameModeBase>(GetOwner());
	
}


// Called every frame
void USetTower::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USetTower::SpawnTower(FVector loc)
{
	PRINTLOG(TEXT("SPAWN TOWER"));
	FRotator rot = FRotator::ZeroRotator;
	/*

	// 마우스 클릭 이벤트 받기
	APlayerController* myController = GetWorld()->GetFirstPlayerController();
	
	if (myController)
	{
		myController->bEnableClickEvents = true;

		if (myController->WasInputKeyJustPressed("InputMouse"))
		{
			PRINTLOG(TEXT("Click"));
			// 마우스 클릭 오브젝트가 설치가능한 지형인지
			FHitResult Hit;
			myController->GetHitResultUnderCursor(ECC_Visibility, false, Hit);

			// 설치 가능한 지형일 경우 spawn
			if (Hit.GetActor()->GetName().Contains("Tile"))
			{
				// 마우스 클릭 위치 받기
				//GetMousePosition
				float locX = 0;
				float locY = 0;
				myController->GetMousePosition(locX, locY);
				loc = FVector(locX, locY,0);

				PRINTLOG(TEXT("Hit %s"), *Hit.GetActor()->GetName());

				loc = Hit.GetActor()->GetActorLocation();

				FActorSpawnParameters Param;
				Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
	
				if (idx == 2)
				{
					if (towerSlowFactory)
					{
						auto tower = GetWorld()->SpawnActor<ATower_Slow>(towerSlowFactory, loc + FVector(0, 0, 70), rot,Param);
					}
				}

				// 설치 가능한 지형 표시 비활성화
			}
		}
	}
	*/

	FActorSpawnParameters Param;
	Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	if (gameModeBase->GetSelectedIdx() == 2)
	{
		if (towerSlowFactory)
		{
			auto tower = GetWorld()->SpawnActor<ATower_Slow>(towerSlowFactory, loc + FVector(0, 0, 70), rot, Param);
		}
	}

	gameModeBase->SetTileSelect(false);
}