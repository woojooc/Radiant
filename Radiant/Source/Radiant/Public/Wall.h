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
	
	FVector originalLoc;
	void SetLocOrigin();


	//flase면 떨어짐.
	bool bStatic = true;
	void SetStaticWall(bool b)
	{
		bStatic = b;
		PrimaryActorTick.bCanEverTick = !bStatic;
	}
	bool isStatic()
	{
		return bStatic;
	}

	bool bShake = true;
	bool isShake()
	{
		return bShake;
	}

	UPROPERTY(EditAnywhere, Category = "CameraEffect")
		TSubclassOf<class UCameraShakeBase> wallShake;
	UPROPERTY(EditAnywhere, Category = "CameraEffect")
		TSubclassOf<class UCameraShakeBase> lastWallShake;
		bool isLast = false;
};
