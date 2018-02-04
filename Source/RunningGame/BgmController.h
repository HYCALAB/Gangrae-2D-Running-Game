// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Sound/SoundBase.h"
#include "BgmController.generated.h"


UCLASS()
class RUNNINGGAME_API ABgmController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetSoundClassVolume(USoundClass* TargetSoundClass, float NewVolume);
	
	UFUNCTION(BlueprintPure)
	float GetSoundClassVolume(USoundClass* TargetSoundClass);
};
