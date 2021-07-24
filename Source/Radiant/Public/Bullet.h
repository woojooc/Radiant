// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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


	// # 충돌 관련
	// 충돌체 BoxComponent
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class UBoxComponent* collision;

	// OverlapBegin 충돌 이벤트 발생 시 호출할 함수  ->  자식 클래스에서 오버라이딩해서 사용하기
	UFUNCTION()
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// # 속성
	// 데미지
	int damage;

	
};
