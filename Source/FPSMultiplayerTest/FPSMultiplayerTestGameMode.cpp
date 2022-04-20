// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSMultiplayerTestGameMode.h"
#include "FPSMultiplayerTestHUD.h"
#include "FPSMultiplayerTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSMultiplayerTestGameMode::AFPSMultiplayerTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSMultiplayerTestHUD::StaticClass();
}
