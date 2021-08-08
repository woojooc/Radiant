// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class RADIANT_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// # �浹 ����
	// �浹ü BoxComponent
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class USphereComponent* collision;

	// OverlapBegin �浹 �̺�Ʈ �߻� �� ȣ���� �Լ�  ->  �ڽ� Ŭ�������� �������̵��ؼ� ����ϱ�
	UFUNCTION()
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Hitevent �߻���
	UFUNCTION()
	virtual void OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	// # �Ӽ�
	// ������
	int damage;

	UPROPERTY()
	class ARadiantGameModeBase* gameModeBase;

	ETowerType towerType;
	ETowerType GetType()
	{
		return towerType;
	}
	
};
