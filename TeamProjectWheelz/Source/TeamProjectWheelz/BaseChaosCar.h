// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
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

	// Car Camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Car")
	UCameraComponent* CarCamera;

	// Car Spring Arm
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Car")
	USpringArmComponent* CarSpringArm;

	// Drift Timer
	UPROPERTY(BlueprintReadOnly, Category = "Car")
	float DriftTimer = 0.0f;

	// Drift Max Time
	UPROPERTY(BlueprintReadOnly, Category = "Car")
	float DriftMaxTime = 1.5f;

public:
	ABaseChaosCar();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	bool CheckTeleportCooldown();

private:
	void LookLeft();
	void LookRight();
	void LookBack();
	void ResetCameraRotation();
	void Drift();
	void StopDrift();

	FRotator DefaultCameraRotation;
	FRotator OriginalSpringArmRotation;



};
