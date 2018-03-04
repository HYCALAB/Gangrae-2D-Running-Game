// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RunningGameGameMode.h"
#include "MyRunningGameGameMode.generated.h"

/**
 * 
 */
UCLASS()
class RUNNINGGAME_API AMyRunningGameGameMode : public ARunningGameGameMode
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;

protected:
	// 체력이 감소하는 비율
	// The rate of decaying per frame
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float DecayRate=0.1f;

};
