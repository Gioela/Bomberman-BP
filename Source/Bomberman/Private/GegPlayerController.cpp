// Fill out your copyright notice in the Description page of Project Settings.


#include "GegPlayerController.h"

AGegPlayerController::AGegPlayerController()
{
	bShowMouseCursor = true;
}

void AGegPlayerController::Authenticate_Implementation(const FString& AuthToken)
{
	// f(x) eseguita dal server
	UE_LOG(LogTemp, Warning, TEXT("Player %s sent AuthToken %s"), *GetFullName(), *AuthToken);
}
