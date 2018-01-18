// Fill out your copyright notice in the Description page of Project Settings.

#include "MyRunningGameGameMode.h"

#include "RunningGameCharacter.h"
#include "Kismet/GameplayStatics.h"


void AMyRunningGameGameMode::Tick(float DeltaTime)
{ 
	Super::Tick(DeltaTime);

	ARunningGameCharacter* MyCharacter = Cast<ARunningGameCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

	if (MyCharacter)
	{
		//밑 두줄의 3가지 함수를 정의해야함 RunningGameCharacter 기능을 추가해야함
		if(MyCharacter->GetCurrentHealth()>0)
		{ 
			UE_LOG(LogTemp, Warning, TEXT("Your message"));
			MyCharacter->UpdateHealth(-DeltaTime * DecayRate*(MyCharacter->GetInitialHealth()));
		}
	}
}