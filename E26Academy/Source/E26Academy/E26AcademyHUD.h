// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "E26AcademyHUD.generated.h"

UCLASS()
class AE26AcademyHUD : public AHUD
{
	GENERATED_BODY()

public:
	AE26AcademyHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	

};

