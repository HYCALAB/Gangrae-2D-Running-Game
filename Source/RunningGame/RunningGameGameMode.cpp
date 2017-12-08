// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "RunningGameGameMode.h"
#include "RunningGameCharacter.h"

ARunningGameGameMode::ARunningGameGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ARunningGameCharacter::StaticClass();	
}
