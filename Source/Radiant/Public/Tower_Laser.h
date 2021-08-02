// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tower.h"
#include "Tower_Laser.generated.h"

/**
 * 
 */
UCLASS()
class RADIANT_API ATower_Laser : public ATower
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ATower_Laser();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// # Component
	UPROPERTY(VisibleAnywhere, Category = "Collision")
		class USphereComponent* collision;

	UPROPERTY(VisibleAnywhere, Category = "BodyMesh")
		class UStaticMeshComponent* bodyMesh;

	UPROPERTY()
		class ARadiantGameModeBase* gameModeBase;

	// # �Ӽ�
	// Ÿ��
	UPROPERTY()
		class AEnemy* target;

	bool bTargeting = false;	// Ÿ���� �� - ���̻� Ÿ���� ã�� �ʴ´�.

	float reloadTime = 1;		// ���� ��� �ð�

	// ����
	float curTime = 0;


	// # ���
	void Fire();				// ����

	// # �̺�Ʈ �Լ�

	UFUNCTION()
		void OnRangeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnRangeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
