// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "GameFramework/Actor.h"
#include "Tilemap.generated.h"

UCLASS()
class RADIANT_API ATilemap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATilemap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Root", BlueprintReadWrite)
	class UBoxComponent* root;

	// 12, 20
	UPROPERTY(EditAnywhere, Category = "Tile", BlueprintReadWrite)
	TArray<UStaticMeshComponent*> tile;
	int tilleWidth;
	int tileHeight;

	// Click 이벤트 발생 -> Spawn Tower 전달
	UFUNCTION()
	void OnSelected(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);

	// gamemodebase cache
	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;
};
