// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GGJ_2019_TestGameMode.h"
#include "GGJ_2019_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGGJ_2019_TestGameMode::AGGJ_2019_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
