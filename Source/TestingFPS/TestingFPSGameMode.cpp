// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestingFPSGameMode.h"
#include "TestingFPSHUD.h"
#include "TestingFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingFPSGameMode::ATestingFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingFPSHUD::StaticClass();
}
