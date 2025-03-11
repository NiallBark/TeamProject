#include "BaseChaosCar.h"
#include "ChaosWheeledVehicleMovementComponent.h"

void ABaseChaosCar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TeleportCooldownTimer -= DeltaTime;
	TrueSpeed = GetVehicleMovement()->GetForwardSpeed();
	DisplaySpeed = FMath::Abs(TrueSpeed) / 640.0f;
	// Limit DisplaySpeed's float precision to 2 decimal places
	DisplaySpeed = FMath::RoundToFloat(DisplaySpeed * 100) / 100;
};

bool ABaseChaosCar::CheckTeleportCooldown()
{
	if (TeleportCooldownTimer <= 0)
	{
		TeleportCooldownTimer = 0.1f;
		return true;
	}
	else
	{
		return false;
	}
}