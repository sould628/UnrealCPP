// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerController.h"
void AABPlayerController::OnPossess(APawn* aPawn) {
	Super::OnPossess(aPawn);
	ABLOG_S(Warning);
}
void AABPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

void AABPlayerController::BeginPlay() {
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}