// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIControl.h"


void ATankAIControl::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("not possessing"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("this playertank %s"), *(PlayerTank->GetName()))
	}

	UE_LOG(LogTemp, Warning, TEXT("BeginPlay ai"))
}

void ATankAIControl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetPlayerTank())
	{
		GetControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());
	}
}

ATank* ATankAIControl::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIControl::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	if (!PlayerPawn) { return nullptr; }

	return Cast<ATank>(PlayerPawn);
}

