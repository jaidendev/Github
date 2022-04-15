// Copyright Epic Games, Inc. All Rights Reserved.

#include "GithubGameMode.h"
#include "GithubCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGithubGameMode::AGithubGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
