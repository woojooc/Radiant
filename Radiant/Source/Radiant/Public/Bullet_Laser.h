// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bullet.h"
#include "Bullet_Laser.generated.h"

/**
 * 
 */
UCLASS()
class RADIANT_API ABullet_Laser : public ABullet
{
	GENERATED_BODY()
	

public:
	// Sets default values for this actor's properties
	ABullet_Laser();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// OverlapBegin 충돌 이벤트 발생 시 호출할 함수  ->  부모 클래스 함수 재정의
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;

	// # Component

	UPROPERTY(VisibleAnywhere, Category = "BodyMesh")
		class UStaticMeshComponent* bodyMesh;

	// # 속성
	FVector dir;
	float speed = 250;

	// # 기능
	void SetDirection(FVector d)
	{
		dir = d;
	}
};
