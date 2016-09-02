// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float RelativeSpeed);

private:

	UPROPERTY(EditAnywhere)
	float MaxDegreesPerSecond = 5;
	UPROPERTY(EditAnywhere)
	float MaxElevation = 40;
	UPROPERTY(EditAnywhere)
	float MinElevation = 0;

	
};
