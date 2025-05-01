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

    // AI Random Body Colour
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI");
	FLinearColor AIColour = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);

	// AI Random Secondary Colour
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI");
	FLinearColor AISecondaryColour = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);

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
    float TargetSpeed = 1.6f;

    // AI Speed Modifier
    float SpeedModifier = 1.0f;

    // AI Reset Timer for when the AI is stuck
    UPROPERTY(EditAnywhere, Category = "AI");
    float AIResetTimer = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float DriftDelay = 0.1f; // Delay in seconds before AI starts drifting

    float DriftDelayTimer = 0.0f; // Internal timer to track the delay

    // Target point for the AI to move towards
    UPROPERTY(EditAnywhere, Category = "AI");
    FVector TargetPoint;

    // Car True Speed
    UPROPERTY(BlueprintReadOnly, Category = "Car")
    float TrueSpeed;

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

    // Checkpoint Limit
    UPROPERTY(EditAnywhere, Category = "Others")
    int CheckpointLimit = 9;

    UPrimitiveComponent* CarRoot;

private:
    UPROPERTY(EditAnywhere, Category = "AI");
    class ACheckpointManager* CheckpointManager;
    UPROPERTY(EditAnywhere, Category = "AI");
    class ACheckpoint* CurrentCheckpoint;
    UPROPERTY(EditAnywhere, Category = "AI");
    class ACheckpoint* NextCheckpoint;
	UPROPERTY(EditAnywhere, Category = "AI");
	float ResetTimer = 10.0f;
    

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

    // Wait Timer For Start Of Race
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	float WaitTimer = 12.0f;

    // Car Display Speed
    UPROPERTY(BlueprintReadWrite, Category = "Car")
    float DisplaySpeed;

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
    float LapCounter = 1;

    // Checkpoint Counter
    UPROPERTY(EditAnywhere, Category = "Others")
    int CheckpointCounter = 0;

	// Race Position
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	int RacePosition = 0;

    // Respawn Point
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    FVector RespawnPoint;

    // Respawn Rotation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    FRotator RespawnRotation;

    // Car ID Given By The CheckpointManager
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Car")
    int CarID = 0;

    // Distance to the next checkpoint
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Car")
    float DistanceToNextCheckpoint = 0.0f;

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
    
    // Race Position Value: LapCounter / CheckpointCounter / (1000 - DistanceToNextCheckpoint)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    float RacePositionValue;

    // Checkpoint Number / Position /
    virtual void UpdateCheckpointCounter(int Checkpoint, FVector RespawnPoint, FRotator RespawnRotation);
    
    // Expose Turning function to Blueprints
    UFUNCTION(BlueprintCallable, Category = "Car")
    void Turning(float Value);

    // Expose DriveForward function to Blueprints
    UFUNCTION(BlueprintCallable, Category = "Car")
    void DriveForward(float Value);
    
    // The AI Driver's Name
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FString DriverName = "You";
    
    // Display Name
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FString DisplayName = " ";
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI");
    bool IsAISmart = false;

    // AI Check
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    bool IsAI = false;

private:
    void LookLeft();
    void LookRight();
    void LookBack();
    void ResetCameraRotation();
    void Drift();
    void StopDrift();
    void UpdateCheckpoint(bool IsSmart);
    void CompleteLap(float);
    // Reset Car with both position and rotation
    void ResetCar();
   

    FRotator DefaultCameraRotation;
    FRotator OriginalSpringArmRotation;
};