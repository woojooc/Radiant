// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Radiant.h"
#include "Bullet.h"
#include "Bullet_Slow.h"
#include "Components/ActorComponent.h"
#include "ObjectPool.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RADIANT_API UObjectPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UObjectPool();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	// 총알 활성화시키는 함수
	void SetBulletActive(ABullet* bullet, bool isActive);

	// 탄창에 총알을 추가해주는 함수
	void AddBullet(ABullet* bullet, ETowerType type);

	// 탄창(풀)에서 총알을 하나 빼오기
	ABullet* GetBullet(ETowerType type);

	ABullet* CreateBullet(ETowerType type);


	// # BULLET_SLOW
	// 필요속성 : 탄창크기, 탄창(오브젝트풀), 총알공장
	UPROPERTY(EditDefaultsOnly, Category = "BulletSlow", meta = (AllowPrivateAccess = true))
	int bulletSlowPoolSize;

	UPROPERTY(VisibleAnywhere, Category = "BulletSlow", meta = (AllowPrivateAccess = true))
	TArray<ABullet_Slow*> bulletSlowPool;

	// 공장
	UPROPERTY(EditDefaultsOnly, Category = "BulletSlow", meta = (AllowPrivateAccess = true))
	TSubclassOf<class ABullet_Slow> bulletSlowFactory;
};
