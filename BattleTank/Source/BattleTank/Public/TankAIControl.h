// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "TankAIControl.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIControl : public AAIController
{
	GENERATED_BODY()
	
public:


private:

	virtual void Tick(float DeltaSeconds) override;

	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;

	ATank* GetPlayerTank() const;
	
	
};
