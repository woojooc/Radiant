// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyMove.generated.h"


// 아래로 계속 이동하고 싶다.
// 필요속성 : 이속

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RADIANT_API UEnemyMove : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyMove();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// 이속
	UPROPERTY(EditAnywhere, Category = "Setting")
	float speed = 200;

	// 컴포넌트를 소유하고 있는 액터
	class AEnemy* me;

	// Target
	UPROPERTY(VisibleAnywhere, Category = "Target")
	class AActor* target;
};
