#include "BaseChaosCar.h"
#include "ChaosWheeledVehicleMovementComponent.h"

void ABaseChaosCar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	timer += DeltaTime;

	// Ensure the vehicle has a valid movement component
	UChaosWheeledVehicleMovementComponent* ChaosVehicleMovementComponent = Cast<UChaosWheeledVehicleMovementComponent>(GetVehicleMovementComponent());
	if (ChaosVehicleMovementComponent && timer < 20)
	{
		// Overwrite the max torque with the value from the header file
		ChaosVehicleMovementComponent->EngineSetup.MaxTorque = OverwritingMaxTorque;

		// Overwrite the max RPM with the value from the header file
		ChaosVehicleMovementComponent->EngineSetup.MaxRPM = OverwritingMaxRPM;
	}
};