// Copyright Epic Games, Inc. All Rights Reserved.

#include "ManasoupGJ3GameMode.h"
#include "ManasoupGJ3Character.h"
#include "UObject/ConstructorHelpers.h"

AManasoupGJ3GameMode::AManasoupGJ3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
