// Copyright Epic Games, Inc. All Rights Reserved.

#include "DungeonsEscapeGameMode.h"
#include "DungeonsEscapeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonsEscapeGameMode::ADungeonsEscapeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
