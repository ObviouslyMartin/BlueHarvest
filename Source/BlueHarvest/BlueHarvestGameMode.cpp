// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BlueHarvestGameMode.h"
#include "BlueHarvestPawn.h"

ABlueHarvestGameMode::ABlueHarvestGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ABlueHarvestPawn::StaticClass();
}
