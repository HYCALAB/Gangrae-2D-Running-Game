// Fill out your copyright notice in the Description page of Project Settings.

#include "BgmController.h"




void ABgmController::SetSoundClassVolume(USoundClass* TargetSoundClass, float NewVolume) {
	if (TargetSoundClass)
		TargetSoundClass->Properties.Volume = NewVolume;
}

float ABgmController::GetSoundClassVolume(USoundClass* TargetSoundClass) {
	if (TargetSoundClass)
		return TargetSoundClass->Properties.Volume;
	return 0.0f;
}