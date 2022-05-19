// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GegPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_API AGegPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AGegPlayerController();

	UFUNCTION(BlueprintCallable, Server, Reliable, Category="ServerFunctions")
		void Authenticate(const FString& AuthToken);
	
};
