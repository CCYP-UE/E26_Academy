// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "E26Academy.h"
#include "E26AcademyGameMode.h"
#include "E26AcademyHUD.h"
#include "E26AcademyCharacter.h"

AE26AcademyGameMode::AE26AcademyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AE26AcademyHUD::StaticClass();
}
