// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "BaseChaosCar.generated.h"

/**
 *
 */
UCLASS()
class TEAMPROJECTWHEELZ_API ABaseChaosCar : public AWheeledVehiclePawn
{
	GENERATED_BODY()

protected:

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Car True Speed
	UPROPERTY(BlueprintReadOnly, Category = "Car")
    float TrueSpeed;
        
    // Car Display Speed
	UPROPERTY(BlueprintReadOnly, Category = "Car")
	float DisplaySpeed;

	// The Car's Teleport Cooldown Timer To Prevent Multiple Teleports In The Same Teleporter
	UPROPERTY(BlueprintReadOnly, Category = "Car")
	float TeleportCooldownTimer = 0.1f;

public:

	bool CheckTeleportCooldown();
	

};
