#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "BaseChaosCar.generated.h"

class UNiagaraSystem;

UCLASS()
class TEAMPROJECTWHEELZ_API ABaseChaosCar : public AWheeledVehiclePawn
{
    GENERATED_BODY()

protected:

    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

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

    // Car Drift Bool
    UPROPERTY(BlueprintReadOnly, Category = "Car")
    bool bIsDrifting = false;

    // Drift Cooldown
    UPROPERTY(BlueprintReadOnly, Category = "Car")
    float DriftCooldown = 0.0f;

    // Can Drift Bool
    UPROPERTY(BlueprintReadOnly, Category = "Car")
    bool bCanDrift = true;

    // Drift Max Time
    UPROPERTY(BlueprintReadOnly, Category = "Car")
    float DriftMaxTime = 1.5f;

    // Car Current Friction
    UPROPERTY(BlueprintReadOnly, Category = "Car")
    float CurrentFriction = 4.0f;

    UPrimitiveComponent* CarRoot;

public:
    ABaseChaosCar();
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    bool CheckTeleportCooldown();

    // Car Inital Drift Friction
    UPROPERTY(EditAnywhere, Category = "Car")
    float DriftFriction = 1.0f;

    // Car Drifting Friction
    UPROPERTY(EditAnywhere, Category = "Car")
    float DriftingFriction = 2.0f;

    // Car Default Friction
    UPROPERTY(EditAnywhere, Category = "Car")
    float DefaultFriction = 4.0f;

    // NiagaraFX Component Back Left Tire
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    UNiagaraSystem* BackLeftTireFX;

    // NiagaraFX Component Back Left Tire Position
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Car")
    USceneComponent* BackLeftTireFXPosition;

    // NiagaraFX Component Back Right Tire
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    UNiagaraSystem* BackRightTireFX;

    // NiagaraFX Component Back Right Tire Position
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Car")
    USceneComponent* BackRightTireFXPosition;

    // NiagaraFX Boost
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    UNiagaraSystem* BoostFX;

    // NiagaraFX Boost Position
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Car")
    USceneComponent* BoostFXPosition;

    // References to the spawned Niagara components
    UPROPERTY()
    UNiagaraComponent* BackLeftTireFXComponent;

    UPROPERTY()
    UNiagaraComponent* BackRightTireFXComponent;

    UPROPERTY()
    UNiagaraComponent* BoostFXComponent;

    // Main Particle Color
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    FLinearColor ParticleColor = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);

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