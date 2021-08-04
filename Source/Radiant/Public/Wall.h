// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Wall.generated.h"

UCLASS()
class RADIANT_API AWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UBoxComponent* root;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UStaticMeshComponent* bodyMesh;

	// Click 이벤트 발생 -> Spawn Tower 전달
	UFUNCTION()
	void OnSelected(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);

	// gamemodebase cache
	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;

};
