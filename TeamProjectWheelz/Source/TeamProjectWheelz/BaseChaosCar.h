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

public:
	// Chaos Vehicles

	// Engine Setup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Engine", meta = (ToolTip = "Maximum torque of the engine"))
	float OverwritingMaxTorque = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Engine", meta = (ToolTip = "Maximum RPM of the engine"))
	float OverwritingMaxRPM = 7000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Engine", meta = (ToolTip = "Idle RPM of the engine"))
	float OverwritingEngineIdleRPM = 5000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Engine", meta = (ToolTip = "Brake effect of the engine"))
	float OverwritingEngineBrakeEffect = 0.05f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Engine", meta = (ToolTip = "Moment of inertia for engine rev up"))
	float OverwritingEngineRevUpMOI = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Engine", meta = (ToolTip = "Rate at which the engine revs down"))
	float OverwritingEngineRevDownRate = 600.0f;

	// Transmission Setup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Transmission", meta = (ToolTip = "RPM at which to change up gears"))
	float OverwritingChangeUpRPM = 6000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Transmission", meta = (ToolTip = "RPM at which to change down gears"))
	float OverwritingChangeDownRPM = 4000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Transmission", meta = (ToolTip = "Time taken to change gears"))
	float OverwritingGearChangeTime = 0.4f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Transmission", meta = (ToolTip = "Efficiency of the transmission"))
	float OverwritingTransmissionEfficiency = 0.9f;

	// Vehicle Setup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Vehicle", meta = (ToolTip = "Mass of the vehicle"))
	float OverwritingMass = 700.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Vehicle", meta = (ToolTip = "Width of the chassis"))
	float OverwritingChassisWidth = 120.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Vehicle", meta = (ToolTip = "Height of the chassis"))
	float OverwritingChassisHeight = 90.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Vehicle", meta = (ToolTip = "Drag coefficient of the vehicle"))
	float OverwritingDragCoefficient = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Vehicle", meta = (ToolTip = "Downforce coefficient of the vehicle"))
	float OverwritingDownforceCoefficient = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Vehicle", meta = (ToolTip = "Sleep threshold of the vehicle"))
	float OverwritingSleepThreshold = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Vehicle", meta = (ToolTip = "Sleep slope limit of the vehicle"))
	float OverwritingSleepSlopeLimit = 0.866f;

	// Steering
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Steering", meta = (ToolTip = "Angle ratio for steering"))
	float OverwritingAngleRatio = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Steering", meta = (ToolTip = "Steering curve"))
	FRuntimeFloatCurve OverwritingSteeringCurve;

	// Arcade Control
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | ArcadeControl", meta = (ToolTip = "Enable arcade control"))
	bool OverwritingbArcadeControlEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | ArcadeControl", meta = (ToolTip = "Altitude hold Z value"))
	float OverwritingAltitudeHoldZ = 2.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | ArcadeControl", meta = (ToolTip = "Position hold XY value"))
	float OverwritingPositionHoldXY = 2.5f;

	// Wheels
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Wheels", meta = (ToolTip = "Radius of the wheels"))
	float OverwritingWheelRadius = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Wheels", meta = (ToolTip = "Width of the wheels"))
	float OverwritingWheelWidth = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Wheels", meta = (ToolTip = "Mass of the wheels"))
	float OverwritingWheelMass = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Wheels", meta = (ToolTip = "Cornering stiffness of the wheels"))
	float OverwritingCorneringStiffness = 550.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Wheels", meta = (ToolTip = "Slide slip modifier of the wheels"))
	float OverwritingSlideSlipModifier = 6.0f;

	// Meshes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Meshes", meta = (ToolTip = "Vehicle mesh"))
	UStaticMeshComponent* OverwritingVehicleMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chaos Vehicles | Meshes", meta = (ToolTip = "Wheel class reference"))
	TSubclassOf<class UStaticMeshComponent> OverwritingWheelClass;

	float timer = 0.0f;

protected:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
