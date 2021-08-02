// Fill out your copyright notice in the Description page of Project Settings.


#include "Tilemap.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Materials/Material.h>
#include "RadiantGameModeBase.h"
#include "SetTower.h"

// Sets default values
ATilemap::ATilemap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	RootComponent = root;
	
	tilleWidth = 20;
	tileHeight = 12;

	// StaticMesh ������ �������� �ε��ؼ� �Ҵ��ϱ�
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	// ���� �ε��ϱ�
	ConstructorHelpers::FObjectFinder<UMaterial> TempMat(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial'"));
	
	for (int i = 0; i < tileHeight; i++)
	{
		for (int j = 0; j < tilleWidth; j++)
		{
			auto name = FString::Printf(TEXT("Tile%02d,%02d"), j, i);
			auto temp = CreateDefaultSubobject<UStaticMeshComponent>(FName(name));
			temp->SetupAttachment(root);

			// �ּ��� ���������� �ε� �ߴٸ� true �� ����
			if (TempMesh.Succeeded())
			{
				// �о���� �����͸� �Ҵ�
				temp->SetStaticMesh(TempMesh.Object);
			}

			// �ּ��� ���������� �ε� �ߴٸ� true �� ����
			if (TempMat.Succeeded())
			{
				// �о���� �����͸� �Ҵ�
				temp->SetMaterial(0, TempMat.Object);
			}

			temp->SetRelativeScale3D(FVector(0.7, 0.7, 0.7));
			temp->SetRelativeLocation(FVector(70 * j, 70 * i, 0));

			temp->OnClicked.AddDynamic(this, &ATilemap::OnSelected);
			temp->SetCollisionProfileName(TEXT("Tile"));

			//temp->SetVisibility(false);
			temp->SetHiddenInGame(true);

			tile.Add(temp);
		}
	}
			//root->OnClicked.AddDynamic(this, &ATilemap::OnSelected);
}

// Called when the game starts or when spawned
void ATilemap::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast<ARadiantGameModeBase>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void ATilemap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATilemap::OnSelected(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed)
{
	// ��ġ ����
	//PRINTLOG(TEXT("Tile Clicked %s"),*GetName());

	if (gameModeBase->CanTileSelect() == true)
	{
		//PRINTLOG(TEXT("gameModeBase"));
		gameModeBase->setTowerCompo->SpawnTower(TouchedComponent->GetComponentLocation());
	}

}