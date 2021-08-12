// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IntroComp.generated.h"

UENUM()
enum class EIntroState : uint8
{
	ShowBlackhole,
	BlackholeBigger,
	Swirl,
	Boom,
	EnemyGenerate,
	EnemyMove,
	GoleCameraIn,
	ShowAll
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RADIANT_API UIntroComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UIntroComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY()
	class UMaterialParameterCollection* collection;
	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;

	UPROPERTY(EditAnywhere, Category = "Effect")
	class UParticleSystem* boomEffectFactory;

	// CameraShake
	UPROPERTY(EditAnywhere, Category = "CameraEffect")
	TSubclassOf<class UCameraShakeBase> basicShake;
	UPROPERTY(EditAnywhere, Category = "CameraEffect")
	TSubclassOf<class UCameraShakeBase> boomShake;
	UPROPERTY(EditAnywhere, Category = "CameraEffect")
		TSubclassOf<class UCameraShakeBase> swirlShake;
	UPROPERTY(EditAnywhere, Category = "CameraEffect")
		TSubclassOf<class UCameraShakeBase> spawnShake;

	// Actor in World
	UPROPERTY()
	class ACameraActor* sceneCam;
	UPROPERTY()
	class AActor* menu;
	UPROPERTY()
	class AEnemyManager* blackhole;
	UPROPERTY()
	class AActor* swirlPos;
	UPROPERTY()
	class AActor* goal;

	// state
	EIntroState m_state;

	// Collection Param
	float fxSpeed;
	FVector fxLoc;

	// Time Param
	float curTime = 0;

	float blackholeBiggerTime = 1.0;
	float biggerV = 0.8;

	//float swirlingTime;
	float swirlSpeed = 0.8;
	float zoommV = 4;

	float boomTime = 0.5;
	float zoomoutV = 5;

	float enemyGenerateTime = 1.5;
	AActor* target;
	int enemyCount = 0;


	// State Function
	void BlackholeBigger();
	void Swirl();
	void Boom();
	void EnemyGenerate();
	void EnemyMove();
	void GoleCameraIn();
	void ShowAll();
};
