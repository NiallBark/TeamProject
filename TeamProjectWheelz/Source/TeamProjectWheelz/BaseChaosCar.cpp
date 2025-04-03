#include "BaseChaosCar.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"

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

    PlayerInputComponent->BindAction("LookLeft", IE_Repeat, this, &ABaseChaosCar::LookLeft);
    PlayerInputComponent->BindAction("LookRight", IE_Repeat, this, &ABaseChaosCar::LookRight);
    PlayerInputComponent->BindAction("LookBack", IE_Repeat, this, &ABaseChaosCar::LookBack);
    PlayerInputComponent->BindAction("Drift2", IE_Repeat, this, &ABaseChaosCar::Drift);
    PlayerInputComponent->BindAction("Drift2", IE_Pressed, this, &ABaseChaosCar::Drift);
    PlayerInputComponent->BindAction("Drift2", IE_Released, this, &ABaseChaosCar::StopDrift);
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

            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Spawning BackLeftTireFXComponent"));
        }
        else
        {
            BackLeftTireFXComponent->Activate(true);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Activating BackLeftTireFXComponent"));
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

            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Spawning BackRightTireFXComponent"));
        }
        else
        {
            BackRightTireFXComponent->Activate(true);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Activating BackRightTireFXComponent"));
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
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Deactivating BackLeftTireFXComponent"));
    }

    if (BackRightTireFXComponent)
    {
        BackRightTireFXComponent->Deactivate();
        BackRightTireFXComponent = nullptr;
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Deactivating BackRightTireFXComponent"));
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


void ABaseChaosCar::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

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

        // Debugging - Display speeds
        GEngine->AddOnScreenDebugMessage(4, 5.f, FColor::Red, FString::Printf(TEXT("ForwardSpeed: %f"), ForwardSpeed));
        GEngine->AddOnScreenDebugMessage(5, 5.f, FColor::Red, FString::Printf(TEXT("SidewaysSpeed: %f"), SidewaysSpeed));

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
            GEngine->AddOnScreenDebugMessage(6, 5.f, FColor::Red, TEXT("Applying forward force"));
        }
    }

    // Boosting Debug
    GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Red, FString::Printf(TEXT("DriftTimer: %f"), DriftTimer));
    GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, FString::Printf(TEXT("BoostForce: %f"), 350.0f * (DriftTimer - (DisplaySpeed * 2))));
    GEngine->AddOnScreenDebugMessage(2, 5.f, FColor::Red, FString::Printf(TEXT("CurrentFriction: %f"), CurrentFriction));
    GEngine->AddOnScreenDebugMessage(3, 5.f, ParticleColor.ToFColor(true), FString::Printf(TEXT("ParticleColor: %s"), *ParticleColor.ToString()));

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
}


void ABaseChaosCar::BeginPlay()
{
    Super::BeginPlay();
    CarRoot = Cast<UPrimitiveComponent>(GetRootComponent());
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
