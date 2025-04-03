#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "CheckpointManager.h"
#include "Checkpoint.h"
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

    // AI Check
    UPROPERTY(EditAnywhere, Category = "AI")
    bool IsAI = false;

    UPROPERTY(EditAnywhere, Category = "AI");
    bool IsAISmart = false;

    // Chance for the AI to take a shortcut from 0 to 10
    UPROPERTY(EditAnywhere, Category = "AI");
    int AIShortcutChance = 0;

    // Chance roll for the AI to take a shortcut from 0 to 10
    UPROPERTY(EditAnywhere, Category = "AI");
    int AIShortcutRoll = 0;

    // Ai's Target Point Deviation value
    UPROPERTY(EditAnywhere, Category = "AI");
    int LocationDeviation = 0;

    // Target Speed
    UPROPERTY(EditAnywhere, Category = "AI");
    float TargetSpeed = 2.0f;

    // Target point for the AI to move towards
    UPROPERTY(EditAnywhere, Category = "AI");
    FVector TargetPoint;

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

    // Internal Timer
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Others")
    float InternalTimer = 0;

    // Display Timer
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Others")
    int DisplayTimer = 0;

    // Best Lap Time
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Others")
    int BestLapTime = 0;

    // Checkpoint Counter
    UPROPERTY(EditAnywhere, Category = "Others")
    int CheckpointCounter = 0;

    // Checkpoint Limit
    UPROPERTY(EditAnywhere, Category = "Others")
    int CheckpointLimit = 33;

    UPrimitiveComponent* CarRoot;

private:
    UPROPERTY(EditAnywhere, Category = "AI");
    class ACheckpointManager* CheckpointManager;
    UPROPERTY(EditAnywhere, Category = "AI");
    class ACheckpoint* CurrentCheckpoint;
    UPROPERTY(EditAnywhere, Category = "AI");
    class ACheckpoint* NextCheckpoint;
    

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

    // Lap Counter
    UPROPERTY(BlueprintReadWrite, Category = "Others")
    int LapCounter = 1;

    // References to the spawned Niagara components
    UPROPERTY()
    UNiagaraComponent* BackLeftTireFXComponent;

    UPROPERTY()
    UNiagaraComponent* BackRightTireFXComponent;

    UPROPERTY()
    UNiagaraComponent* BoostFXComponent;

    // Stored Position
    FVector StoredPosition;

    // Stored Rotation
    FRotator StoredRotation;

    // Main Particle Color
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    FLinearColor ParticleColor = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);

    // Checkpoint Number / Position /
    virtual void UpdateCheckpointCounter(int Checkpoint, FVector RespawnPoint, FRotator RespawnRotation);

    // Reset Car with both position and rotation
    virtual void ResetCar(FVector RespawnPoint, FRotator RespawnRotation);
    
    // Expose Turning function to Blueprints
    UFUNCTION(BlueprintCallable, Category = "Car")
    void Turning(float Value);

    // Expose DriveForward function to Blueprints
    UFUNCTION(BlueprintCallable, Category = "Car")
    void DriveForward(float Value);

private:
    void LookLeft();
    void LookRight();
    void LookBack();
    void ResetCameraRotation();
    void Drift();
    void StopDrift();
    void UpdateCheckpoint(bool IsSmart);
    void CompleteLap(float);
   

    FRotator DefaultCameraRotation;
    FRotator OriginalSpringArmRotation;
};