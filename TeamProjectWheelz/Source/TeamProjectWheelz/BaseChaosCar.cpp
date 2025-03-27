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
    PlayerInputComponent->BindAxis("MoveRight", this, &ABaseChaosCar::MoveRightCPlus);
    PlayerInputComponent->BindAxis("Throttle", this, &ABaseChaosCar::ThrottleCPlus);
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

    // Use ParticleColor as the static color
    FLinearColor DesiredColor = ParticleColor;

    // Activate or reactivate the NiagaraFX Components for Back Left Tire
    if (BackLeftTireFX && BackLeftTireFXPosition && !bIsDrifting)
    {
        if (!BackLeftTireFXComponent)
        {
            // Spawn the Niagara system and set the color
            BackLeftTireFXComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(BackLeftTireFX, BackLeftTireFXPosition, NAME_None, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);
            // Set the "Color Maximum" parameter instead of "Color"
            UNiagaraComponent* NiagaraCompLeft = UNiagaraFunctionLibrary::SpawnSystemAttached(BackLeftTireFX, BackLeftTireFXPosition, NAME_None, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);
            NiagaraCompLeft->SetNiagaraVariableLinearColor(FString("Color Maximum"), DesiredColor);
        }
        else
        {
            // Activate the system if it's already created and set the color
            BackLeftTireFXComponent->Activate(true);
            UNiagaraComponent* NiagaraCompLeft = UNiagaraFunctionLibrary::SpawnSystemAttached(BackLeftTireFX, BackLeftTireFXPosition, NAME_None, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);
            NiagaraCompLeft->SetNiagaraVariableLinearColor(FString("Color Maximum"), DesiredColor);
        }
    }

    // Activate or reactivate the NiagaraFX Components for Back Right Tire
    if (BackRightTireFX && BackRightTireFXPosition && !bIsDrifting)
    {
        if (!BackRightTireFXComponent)
        {
            // Spawn the Niagara system and set the color
            BackRightTireFXComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(BackRightTireFX, BackRightTireFXPosition, NAME_None, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);
            // Set the "Color Maximum" parameter instead of "Color"
            UNiagaraComponent* NiagaraCompRight = UNiagaraFunctionLibrary::SpawnSystemAttached(BackRightTireFX, BackRightTireFXPosition, NAME_None, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);
            NiagaraCompRight->SetNiagaraVariableLinearColor(FString("Color Maximum"), DesiredColor);
        }
        else
        {
            // Activate the system if it's already created and set the color
            BackRightTireFXComponent->Activate(true);
            UNiagaraComponent* NiagaraCompRight = UNiagaraFunctionLibrary::SpawnSystemAttached(BackRightTireFX, BackRightTireFXPosition, NAME_None, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);
            NiagaraCompRight->SetNiagaraVariableLinearColor(FString("Color Maximum"), DesiredColor);
        }
    }

    bIsDrifting = true;
}



void ABaseChaosCar::StopDrift()
{
    bIsDrifting = false;
    DriftCooldown = 0.0f;
    bCanDrift = false;
    UPrimitiveComponent* CarRoot = Cast<UPrimitiveComponent>(GetRootComponent());

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
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("BackLeftTireFXComponent is not null"));
        BackLeftTireFXComponent->Deactivate();
    }
    if (BackRightTireFXComponent)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("BackRightTireFXComponent is not null"));
        BackRightTireFXComponent->Deactivate();
    }

    // Activate the BoostFX Component
    if (BoostFX && BoostFXPosition)
    {
        if (!BoostFXComponent)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("BoostFXComponent is null"));
            BoostFXComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(BoostFX, BoostFXPosition, NAME_None, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("BoostFXComponent is not null"));
            BoostFXComponent->Activate(true);
        }
    }

    DriftTimer = 0.f;
}

void ABaseChaosCar::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TeleportCooldownTimer -= DeltaTime;
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
            CurrentFriction = DefaultFriction;
        }
    }
    else
    {
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
    }

    // Boosting Debug
    // Drift Timer
    GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Red, FString::Printf(TEXT("DriftTimer: %f"), DriftTimer));
    // Boost Force
    GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, FString::Printf(TEXT("BoostForce: %f"), 350.0f * (DriftTimer - (DisplaySpeed * 2))));
    // Current Friction
    GEngine->AddOnScreenDebugMessage(2, 5.f, FColor::Red, FString::Printf(TEXT("CurrentFriction: %f"), CurrentFriction));
    // Particle Color
    GEngine->AddOnScreenDebugMessage(3, 5.f, FColor::Red, FString::Printf(TEXT("ParticleColor: %s"), *ParticleColor.ToString()));

    APlayerController* PlayerController = Cast<APlayerController>(GetController());
    if (PlayerController)
    {
        bool bIsLookingLeft = PlayerController->IsInputKeyDown(EKeys::Left);
        bool bIsLookingRight = PlayerController->IsInputKeyDown(EKeys::Right);
        bool bIsLookingBack = PlayerController->IsInputKeyDown(EKeys::Down);

        //UE_LOG(LogTemp, Warning, TEXT("bIsLookingLeft: %d, bIsLookingRight: %d, bIsLookingBack: %d"), bIsLookingLeft, bIsLookingRight, bIsLookingBack);

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

void ABaseChaosCar::MoveRightCPlus(float Val)
{
    GEngine->AddOnScreenDebugMessage(3, 5.f, FColor::Red, FString::Printf(TEXT("MoveRight: %f"), Val));
}

void ABaseChaosCar::ThrottleCPlus(float Val)
{
    GEngine->AddOnScreenDebugMessage(4, 5.f, FColor::Red, FString::Printf(TEXT("Throttle: %f"), Val));
}