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
	// ü���� �����ϴ� ���� 
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float DecayRate=0.1f;

};
