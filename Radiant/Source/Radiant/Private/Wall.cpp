// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Materials/Material.h>
#include "RadiantGameModeBase.h"
#include "SetTower.h"

// Sets default values
AWall::AWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	RootComponent = root;
	root->SetCollisionProfileName(TEXT("Wall"));
	
	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(root);
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// StaticMesh 데이터 동적으로 로드해서 할당하기
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	// 재질 로드하기
	ConstructorHelpers::FObjectFinder<UMaterial> TempMat(TEXT("Material'/Game/WJung/Resources/Mat/Metal_textures_pack/pattern_23/Mat_pt23.Mat_pt23'"));

	bodyMesh->SetupAttachment(root);

	// 애셋을 성공적으로 로드 했다면 true 를 리턴
	if (TempMesh.Succeeded())
	{
		// 읽어들인 데이터를 할당
		bodyMesh->SetStaticMesh(TempMesh.Object);
	}

	// 애셋을 성공적으로 로드 했다면 true 를 리턴
	if (TempMat.Succeeded())
	{
		// 읽어들인 데이터를 할당
		bodyMesh->SetMaterial(0, TempMat.Object);
	}

	bodyMesh->SetRelativeScale3D(FVector(0.7, 0.7, 0.7));


	root->OnClicked.AddDynamic(this, &AWall::OnSelected);
}

// Called when the game starts or when spawned
void AWall::BeginPlay()
{
	Super::BeginPlay();
	
	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());

	//originalLoc = GetActorLocation();
	SetLocOrigin();
	
	if (!bStatic)
	{
		PrimaryActorTick.bCanEverTick = !bStatic;
	}
}

// Called every frame
void AWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bStatic)
	{
		FVector from = GetActorLocation();
		FVector to = from;
		to.Z=-30;
		FVector result = FMath::Lerp(from, to, 100*GetWorld()->DeltaTimeSeconds);
		//SetActorLocation(GetActorLocation() + FVector(0,0,-100)*DeltaTime);
		SetActorLocation(result);

		if (GetActorLocation().Z <= -20)
		{
			//originalLoc.Z=-30;
			SetActorLocation(originalLoc);
			SetStaticWall(true);
			bShake = false;
			if (!isLast)
			{
				GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(wallShake);
			}
			else
			{
				GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(lastWallShake);
			}
		}
	}
}

void AWall::OnSelected(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed)
{
	// 타워 생성
	if (gameModeBase->CanWallSelect() == true)
	{
		//PRINTLOG(TEXT("gameModeBase"));
		gameModeBase->setTowerCompo->SpawnTower(TouchedComponent->GetComponentLocation());
	}

	// 돈 -
}

void AWall::SetLocOrigin()
{
	originalLoc = GetActorLocation();
	originalLoc.Z=-30;
}