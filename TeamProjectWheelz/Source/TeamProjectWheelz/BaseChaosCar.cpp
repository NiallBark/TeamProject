#include "BaseChaosCar.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "IContentBrowserSingleton.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"

ABaseChaosCar::ABaseChaosCar()
{
    // Initialize the Spring Arm
    CarSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CarSpringArm"));
    CarSpringArm->SetupAttachment(RootComponent);
    CarSpringArm->bUsePawnControlRotation = true; // Rotate the arm based on the controller

    // Initialize the Camera
    CarCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CarCamera"));
    CarCamera->SetupAttachment(CarSpringArm, USpringArmComponent::SocketName); // Attach the camera to the end of the spring arm
    CarCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

    // Set default camera rotation
    DefaultCameraRotation = FRotator(0.f, 0.f, 0.f);
    OriginalSpringArmRotation = CarSpringArm->GetRelativeRotation();
    DriftTimer = 0.f;
    DriftTimer = 0.f;
    DriftMaxTime = 5.0f; // Example value, adjust as needed

    // Attach the NiagaraFX Components
    BackLeftTireFXPosition = CreateDefaultSubobject<USceneComponent>(TEXT("BackLeftTireFXPosition"));
    BackLeftTireFXPosition->SetupAttachment(RootComponent);
    BackRightTireFXPosition = CreateDefaultSubobject<USceneComponent>(TEXT("BackRightTireFXPosition"));
    BackRightTireFXPosition->SetupAttachment(RootComponent);
    BoostFXPosition = CreateDefaultSubobject<USceneComponent>(TEXT("BoostFXPosition"));
    BoostFXPosition->SetupAttachment(RootComponent);
}

void ABaseChaosCar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    UE_LOG(LogTemp, Warning, TEXT("SetupPlayerInputComponent called"));

    //Bind Input Actions if not AI
    if (!IsAI)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player Input Component is not AI"));
        PlayerInputComponent->BindAction("LookLeft", IE_Repeat, this, &ABaseChaosCar::LookLeft);
        PlayerInputComponent->BindAction("LookRight", IE_Repeat, this, &ABaseChaosCar::LookRight);
        PlayerInputComponent->BindAction("LookBack", IE_Repeat, this, &ABaseChaosCar::LookBack);
    }
    PlayerInputComponent->BindAction("Drift2", IE_Repeat, this, &ABaseChaosCar::Drift);
    PlayerInputComponent->BindAction("Drift2", IE_Pressed, this, &ABaseChaosCar::Drift);
    PlayerInputComponent->BindAction("Drift2", IE_Released, this, &ABaseChaosCar::StopDrift);
    PlayerInputComponent->BindAction("Reset2", IE_Pressed, this, &ABaseChaosCar::ResetCar);
    
}

void ABaseChaosCar::LookLeft()
{
    if (CarSpringArm)
    {
        CarSpringArm->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
    }
}

void ABaseChaosCar::LookRight()
{
    if (CarSpringArm)
    {
        CarSpringArm->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));
    }
}

void ABaseChaosCar::LookBack()
{
    if (CarSpringArm)
    {
        CarSpringArm->SetRelativeRotation(FRotator(0.f, 180.f, 0.f));
    }
}

void ABaseChaosCar::ResetCameraRotation()
{
    if (CarSpringArm)
    {
        CarSpringArm->SetRelativeRotation(OriginalSpringArmRotation);
    }
}

void ABaseChaosCar::Drift()
{
    if (!bIsDrifting)
    {
        CurrentFriction = DriftFriction;
    }

    if (DriftTimer >= DriftMaxTime)
    {
        DriftTimer = DriftMaxTime;
    }

    FString ColorParameterName = "ColorMaximum";

    // Activate or reactivate the NiagaraFX Components for Back Left Tire
    if (BackLeftTireFX && BackLeftTireFXPosition)
    {
        if (!BackLeftTireFXComponent)
        {
            BackLeftTireFXComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
                BackLeftTireFX, BackLeftTireFXPosition, NAME_None, FVector::ZeroVector, 
                FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);

            //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Spawning BackLeftTireFXComponent"));
        }
        else
        {
            BackLeftTireFXComponent->Activate(true);
            //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Activating BackLeftTireFXComponent"));
        }

        // Correct usage of FName
        BackLeftTireFXComponent->SetNiagaraVariableLinearColor(ColorParameterName, ParticleColor);
    }

    // Activate or reactivate the NiagaraFX Components for Back Right Tire
    if (BackRightTireFX && BackRightTireFXPosition)
    {
        if (!BackRightTireFXComponent)
        {
            BackRightTireFXComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
                BackRightTireFX, BackRightTireFXPosition, NAME_None, FVector::ZeroVector, 
                FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);

            //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Spawning BackRightTireFXComponent"));
        }
        else
        {
            BackRightTireFXComponent->Activate(true);
            //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Activating BackRightTireFXComponent"));
        }

        // Correct usage of FName
        BackRightTireFXComponent->SetNiagaraVariableLinearColor(ColorParameterName, ParticleColor);
    }

    bIsDrifting = true;
}



void ABaseChaosCar::StopDrift()
{
    bIsDrifting = false;
    DriftCooldown = 0.0f;
    bCanDrift = false;

    if (CarRoot)
    {
        // Check if the car is going backwards
        if (GetVehicleMovement()->GetForwardSpeed() < 0)
        {
            // Reset the car's forward speed
            CarRoot->SetPhysicsLinearVelocity(FVector::ZeroVector);
        }

        // Halve the car's angular velocity
        FVector CurrentAngularVelocity = CarRoot->GetPhysicsAngularVelocityInDegrees();
        CarRoot->SetPhysicsAngularVelocityInDegrees(CurrentAngularVelocity * 0.5f);

        // Apply forward force to the car
        FVector ForwardForce = GetActorForwardVector() * 350.0f * (DriftTimer - (DisplaySpeed * 2));
        CarRoot->AddImpulse(ForwardForce, NAME_None, true);
    }

    // Deactivate the NiagaraFX Components
    if (BackLeftTireFXComponent)
    {
        BackLeftTireFXComponent->Deactivate();
        BackLeftTireFXComponent = nullptr;
        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Deactivating BackLeftTireFXComponent"));
    }

    if (BackRightTireFXComponent)
    {
        BackRightTireFXComponent->Deactivate();
        BackRightTireFXComponent = nullptr;
        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Deactivating BackRightTireFXComponent"));
    }

    // Activate the BoostFX Component if applicable
    if (BoostFX && BoostFXPosition)
    {
        if (!BoostFXComponent)
        {
            BoostFXComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
                BoostFX, BoostFXPosition, NAME_None, FVector::ZeroVector, 
                FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);
        }
        else
        {
            BoostFXComponent->Activate(true);
        }
    }

    DriftTimer = 0.f;
}

void ABaseChaosCar::UpdateCheckpoint(bool IsSmart)
{
    // Set CheckpointRespawnPoint and CheckpointRespawnRotation
    if (IsAI)
    {
        AIShortcutRoll = FMath::RandRange(0, 10);
        if (AIShortcutRoll > AIShortcutChance && CurrentCheckpoint && CurrentCheckpoint->IsShortCut)
        {
            // check if the shortcut is within the array
            if (CheckpointCounter < CheckpointManager->SpawnedCheckpoints.Num() - 1)
            {
                CheckpointCounter++;
            }
            else
            {
                CheckpointCounter = 0;
            }
        }
    }

    if (CheckpointManager && CheckpointManager->SpawnedCheckpoints.Num() > 0)
    {       
        CurrentCheckpoint = NextCheckpoint;
        TargetSpeed = CurrentCheckpoint->TargetSpeed;

        // Wrap around to the beginning of the array
        NextCheckpoint = CheckpointManager->SpawnedCheckpoints[(CheckpointCounter + 1) % CheckpointManager->SpawnedCheckpoints.Num()];

        // Update the target point for AI
        TargetPoint = CurrentCheckpoint->GetAiTargetPoint(IsSmart, LocationDeviation);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("CheckpointManager is null or has no checkpoint"));
    }
}

void ABaseChaosCar::CompleteLap(float LapTime)
{
    if (LapCounter == 3)
    {
        // Level Load
    }
    if (LapTime < BestLapTime || BestLapTime == 0)
    {
        BestLapTime = LapTime;
    }
    LapCounter++;
    // New Lap Debug
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Lap %d Completed!"), LapCounter));
    CheckpointCounter = 0;
    InternalTimer = 0;
}


void ABaseChaosCar::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    int DistanceScore = 10000 - DistanceToNextCheckpoint;
    int CheckpointScore = CheckpointCounter * 1000000;
    int LapScore = LapCounter * 100000000;
    
    RacePositionValue = DistanceScore + CheckpointScore + LapScore;
    CheckpointManager->CarDataArray[CarID].RacePositionValue = RacePositionValue;
    FString Suffix;
    
    if (RacePosition % 100 >= 11 && RacePosition % 100 <= 13) // Special case for 11th, 12th, 13th
    {
        Suffix = "th";
    }
    else
    {
        switch (RacePosition % 10)
        {
        case 1: Suffix = "st"; break;
        case 2: Suffix = "nd"; break;
        case 3: Suffix = "rd"; break;
        default: Suffix = "th"; break;
        }
    }
    
    DisplayName = FString::Printf(TEXT("%s: %d%s"), *DriverName, RacePosition, *Suffix);

    TeleportCooldownTimer -= DeltaTime;
    if (TeleportCooldownTimer > 0)
    {
        CarSpringArm->bEnableCameraLag = false;
        CarSpringArm->bEnableCameraRotationLag = false;
    }
    else
    {
        CarSpringArm->bEnableCameraLag = true;
        CarSpringArm->bEnableCameraRotationLag = true;
    }
    DriftCooldown += DeltaTime;
    TrueSpeed = GetVehicleMovement()->GetForwardSpeed();
    DisplaySpeed = FMath::Abs(TrueSpeed) / 1280.0f;
    DisplaySpeed = FMath::RoundToFloat(DisplaySpeed * 10) / 10;
    
    // FOV Camera based on speed
    if (CarCamera)
    {
        CarCamera->FieldOfView = FMath::FInterpTo(CarCamera->FieldOfView, 90.0f + (DisplaySpeed * 10), DeltaTime, 5.0f);
        // Add motion blur effect based on speed
        CarCamera->PostProcessSettings.MotionBlurAmount = FMath::FInterpTo(CarCamera->PostProcessSettings.MotionBlurAmount, DisplaySpeed * 10, DeltaTime, 5.0f);
    }

    if (!bIsDrifting)
    {
        if (CurrentFriction < DefaultFriction)
        {
            CurrentFriction = FMath::FInterpTo(CurrentFriction, DefaultFriction, DeltaTime, 10.0f);
        }
        else
        {
            if (BoostFXComponent && BoostFXComponent->IsActive() && CurrentFriction)
            {
                BoostFXComponent->Deactivate();
                BoostFXComponent = nullptr;
            }
            CurrentFriction = DefaultFriction;
        }
    }
    else
    {
        FVector Velocity = GetVelocity();
        float ForwardSpeed = FVector::DotProduct(Velocity, GetActorForwardVector()); // Speed along forward direction
        float SidewaysSpeed = FVector::DotProduct(Velocity, GetActorRightVector());  // Speed along right direction (sideways drift)

        if (DriftTimer < DriftMaxTime)
        {
            DriftTimer += DeltaTime * (5 * (DefaultFriction - DriftFriction));
        }
        else
        {
            DriftTimer = DriftMaxTime;
        }

        if (CurrentFriction < DriftingFriction)
        {
            CurrentFriction = FMath::FInterpTo(CurrentFriction, DriftingFriction, DeltaTime, 3.0f);
        }
        else
        {
            CurrentFriction = DriftingFriction;
        }

        // Apply corrective force if going too slow or drifting sideways too much
        float MinimumForwardSpeed = 300.f; // Set this value to your desired "slow" speed threshold
        float SidewaysThreshold = 100.f;   // Set this value to how much sideways drifting is acceptable

        // Check if the car's forward speed is too slow or if it is drifting sideways
        if (ForwardSpeed < MinimumForwardSpeed || FMath::Abs(SidewaysSpeed) > FMath::Abs(ForwardSpeed) + SidewaysThreshold)
        {
            // Apply forward force to speed up the car
            FVector ForwardForce = GetActorForwardVector() * (MinimumForwardSpeed - ForwardSpeed) * 100.0f;  // Apply force in the forward direction
            CarRoot->AddImpulse(ForwardForce);
            //GEngine->AddOnScreenDebugMessage(6, 5.f, FColor::Red, TEXT("Applying forward force"));
        }
    }

    APlayerController* PlayerController = Cast<APlayerController>(GetController());
    if (PlayerController)
    {
        bool bIsLookingLeft = PlayerController->IsInputKeyDown(EKeys::Left);
        bool bIsLookingRight = PlayerController->IsInputKeyDown(EKeys::Right);
        bool bIsLookingBack = PlayerController->IsInputKeyDown(EKeys::Down);

        if (!bIsLookingLeft && !bIsLookingRight && !bIsLookingBack)
        {
            ResetCameraRotation();
        }
        else if (bIsLookingLeft)
        {
            LookLeft();
        }
        else if (bIsLookingRight)
        {
            LookRight();
        }
        else if (bIsLookingBack)
        {
            LookBack();
        }
    }

    if (CurrentCheckpoint)
    {
        FVector Start = GetActorLocation();
        FVector End = CurrentCheckpoint->GetActorLocation();
		DistanceToNextCheckpoint = FVector::Dist(Start, End);
    }

    if (IsAI && TargetPoint != FVector::ZeroVector)
    {
        // Draw a debug line from the car's current location to the TargetPoint
        FVector Start = GetActorLocation();
        FVector End = TargetPoint;
        FColor LineColor = FColor::Green; // You can change this color as needed
        float LineThickness = 2.0f;      // Thickness of the debug line
        float LineDuration = -1.0f;      // Duration the line stays on screen (-1 for one frame)

        DrawDebugLine(GetWorld(), Start, End, LineColor, false, LineDuration, 0, LineThickness);
    }

    // AI Logic
    if (IsAI)
    {
        // Adjust SpeedModifier based on DisplaySpeed and TargetSpeed
        if (TargetSpeed > 0) // Ensure TargetSpeed is valid
        {
            float compSpeed = GetVehicleMovement()->GetForwardSpeed();
            compSpeed = FMath::Abs(compSpeed) / 1280.0f;
            compSpeed = FMath::RoundToFloat(compSpeed * 10) / 10;
            float SpeedDifference = compSpeed - TargetSpeed;
            SpeedModifier = FMath::Clamp(1.0f - (SpeedDifference / TargetSpeed), 0.1f, 1.0f);
        }
        else
        {
            SpeedModifier = 1.0f; // Default to 1.0 if TargetSpeed is invalid
        }
        
        // Rotate the car towards the target point
        FVector TargetLocation = TargetPoint;
        TargetLocation.Z = GetActorLocation().Z;
        FVector TargetDirection = TargetLocation - GetActorLocation();
        TargetDirection.Normalize();
        FRotator TargetRotation = TargetDirection.Rotation();
        TargetRotation.Yaw -= 0.0f;
        FRotator CurrentRotation = GetActorRotation();

        // Get distance from the current location to the target location
        float Distance = FVector::Dist(GetActorLocation(), TargetLocation);

        // Find the shortest angle difference between the current and target yaw
        float DeltaYaw = FMath::FindDeltaAngleDegrees(CurrentRotation.Yaw, TargetRotation.Yaw);
        float AbsoluteDeltaYaw = FMath::Abs(DeltaYaw);
        float TurnValue = FMath::Min(AbsoluteDeltaYaw / 10, 1.0f);
        // Check if the absolute value of the yaw is greater than a value
        if (AbsoluteDeltaYaw <= 10)
        {
            DriftDelayTimer = 0.0f;
            DriveForward(1.0f * SpeedModifier);
            if (bIsDrifting)
            {
                StopDrift();
            }
        }
        else
        {
            if(AbsoluteDeltaYaw >= 50)
            {
                DriftDelayTimer += DeltaTime;
                if (DriftDelayTimer > DriftDelay)
                {
                    Drift();
                }
            }
            DriveForward(0.2f * SpeedModifier);
        }
        if (DeltaYaw > 3)
        {
            Turning(TurnValue);
        }
        else if (DeltaYaw < -3)
        {
            Turning(-TurnValue);
        }

        // Check if the car is motionless, if so begin the teleport cooldown
        if (TrueSpeed < 30.0f)
        {
            AIResetTimer += DeltaTime;
            if (AIResetTimer > 2.0)
            {
                    ResetCar();
                    AIResetTimer = 0.0f;
                    UE_LOG(LogTemp, Warning, TEXT("Car is motionless, resetting position"));
            }
        }        
        // Check if the car is on its side or upside down, if so begin the teleport cooldown
        else if (FMath::Abs(GetActorRotation().Pitch) > 80.0f || FMath::Abs(GetActorRotation().Roll) > 80.0f)
        {
            AIResetTimer += DeltaTime;
            if (AIResetTimer > 2.0)
            {
                ResetCar();
                AIResetTimer = 0.0f;
                UE_LOG(LogTemp, Warning, TEXT("Car is on its side or upside down, resetting position"));
            }
        }
        else
        {
            AIResetTimer = 0.0f;
        }
    }
    RacePosition = CheckpointManager->CarDataArray[CarID].Position;
}


void ABaseChaosCar::BeginPlay()
{
    Super::BeginPlay();
    CarRoot = Cast<UPrimitiveComponent>(GetRootComponent());

    StoredPosition = GetActorLocation();
    StoredRotation = GetActorRotation();

    // Find the CheckpointManager
    TArray<AActor*> CheckpointManagers;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACheckpointManager::StaticClass(), CheckpointManagers);
    if (CheckpointManagers.Num() > 0)
    {
        CheckpointManager = Cast<ACheckpointManager>(CheckpointManagers[0]);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No CheckpointManager found in the level"));
    }
    
    if (CheckpointManager && CheckpointManager->SpawnedCheckpoints.Num() > 0)
    {
        CurrentCheckpoint = CheckpointManager->SpawnedCheckpoints[0];
        CheckpointLimit = CheckpointManager->NumberOfCheckpoints;
        NextCheckpoint = CheckpointManager->SpawnedCheckpoints[1];
        if (IsAI && CurrentCheckpoint)
        {
            TargetPoint = CurrentCheckpoint->GetAiTargetPoint(IsAISmart, LocationDeviation);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No CheckpointManager found or no checkpoint available"));
    }

    // AI Disabling and ohers
    if (CarCamera && CarSpringArm)
    {
        if (IsAI)
        {
            CarCamera->SetActive(false);
            CarSpringArm->SetActive(false);
            DisableInput(nullptr);
			AIColour = FLinearColor(FMath::RandRange(0.0f, 1.0f), FMath::RandRange(0.0f, 1.0f), FMath::RandRange(0.0f, 1.0f), 1.0f);
            AISecondaryColour = FLinearColor(FMath::RandRange(0.0f, 1.0f), FMath::RandRange(0.0f, 1.0f), FMath::RandRange(0.0f, 1.0f), 1.0f);
        }
        else
        {
            CarCamera->SetActive(true);
            CarSpringArm->SetActive(true);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("CarCamera or CarSpringArm is not initialized"));
    }
}

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

void ABaseChaosCar::UpdateCheckpointCounter(int Checkpoint, FVector CheckpointRespawnPoint, FRotator CheckpointRespawnRotation)
{
    if (LapCounter == 3 && Checkpoint == 0)
    {
        // Load main menu level
    }

    if (Checkpoint == (CheckpointCounter + 1) % CheckpointLimit || Checkpoint == (CheckpointCounter + 2) % CheckpointLimit)
    {
        if (CheckpointCounter >= CheckpointLimit - 1)
        {
            CompleteLap(InternalTimer);
        }
        else
        {
            CheckpointCounter = (CheckpointCounter + 1) % CheckpointLimit;
        }
    }
    else if (Checkpoint == (CheckpointCounter + 1) % CheckpointLimit || Checkpoint == (CheckpointCounter + 2) % CheckpointLimit)
    {
        ResetCar();
        UE_LOG(LogTemp, Warning, TEXT("Car is not in the correct checkpoint"));
        // exit function
        return;
    }
    UpdateCheckpoint(IsAISmart);
}

void ABaseChaosCar::ResetCar()
{
    // Teleport the car to the target actor's location and rotation
    CarRoot->SetWorldLocation(StoredPosition, false, nullptr, ETeleportType::TeleportPhysics);
    CarRoot->SetWorldRotation(StoredRotation, false, nullptr, ETeleportType::TeleportPhysics);
    // Remove all momentum
    CarRoot->SetPhysicsLinearVelocity(FVector::ZeroVector);
    CarRoot->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}

void ABaseChaosCar::Turning(float Value)
{
    if (IsAI)
    {
        if (GetVehicleMovementComponent())
        {
            GetVehicleMovementComponent()->SetSteeringInput(Value);
            //GEngine->AddOnScreenDebugMessage(9, 5.f, FColor::Red, TEXT("Turning AI"));
        }
        else
        {
            //GEngine->AddOnScreenDebugMessage(9, 5.f, FColor::Red, TEXT("VehicleMovementComponent is NULL!"));
        }
    }
}

void ABaseChaosCar::DriveForward(float Value)
{
    if (IsAI)
    {
        // AI logic for driving forward
        if (Value > 0)
        {
            if (GetVehicleMovementComponent())
            {
                GetVehicleMovementComponent()->SetThrottleInput(Value);
                //GEngine->AddOnScreenDebugMessage(10, 5.f, FColor::Red, TEXT("Driving forward AI"));
            }
            else
            {
                //GEngine->AddOnScreenDebugMessage(10, 5.f, FColor::Red, TEXT("VehicleMovementComponent is NULL!"));
            }
        }
    }
}
