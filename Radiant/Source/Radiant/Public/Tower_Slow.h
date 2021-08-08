// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "Tower.h"
#include "Tower_Slow.generated.h"

UCLASS()
class RADIANT_API ATower_Slow : public ATower
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATower_Slow();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// # Component
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class USphereComponent* collision;
	
	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UStaticMeshComponent* bodyMesh;

	UPROPERTY(EditAnywhere, Category = "Component")
	class USkeletalMeshComponent* base;
	UPROPERTY(EditAnywhere, Category = "Component")
	class UStaticMeshComponent* head;
	UPROPERTY(EditAnywhere, Category = "Component")
	class UArrowComponent* firePosition;

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


	FRotator idleRot;
	bool setIdleRot = false;

	float idleRotDelayTime = 1;
	bool idleRotDelay = false;

	// # ���
	void Fire();				// ����
	void RotToTarget();			// Ÿ�� �������� ȸ��
	bool IdleRotation();		// ������ ȸ��

	// # �̺�Ʈ �Լ�

	UFUNCTION()
	void OnRangeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnRangeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
