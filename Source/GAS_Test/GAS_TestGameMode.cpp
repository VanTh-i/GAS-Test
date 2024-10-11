// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAS_TestGameMode.h"
#include "GAS_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAS_TestGameMode::AGAS_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
