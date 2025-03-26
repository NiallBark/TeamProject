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
}

void ABaseChaosCar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

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
	bIsDrifting = true;
	CurrentFriction = DriftFriction;
	UE_LOG(LogTemp, Warning, TEXT("DriftTimer: %f"), DriftTimer);
	if (DriftTimer >= DriftMaxTime)
    {
		DriftTimer = DriftMaxTime;
    }
}

void ABaseChaosCar::StopDrift()
{
	bIsDrifting = false;
    // Apply forward force to the car
    FVector ForwardForce = GetActorForwardVector() * 500.0f * (DriftTimer - DisplaySpeed);
	// Create A Pointer To The Root Component
	UPrimitiveComponent* CarRoot = Cast<UPrimitiveComponent>(GetRootComponent());
	// Add Impulse To The Car
	CarRoot->AddImpulse(ForwardForce, NAME_None, true);

    DriftTimer = 0.f;
}

void ABaseChaosCar::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TeleportCooldownTimer -= DeltaTime;
    TrueSpeed = GetVehicleMovement()->GetForwardSpeed();
    DisplaySpeed = FMath::Abs(TrueSpeed) / 1280.0f;
    DisplaySpeed = FMath::RoundToFloat(DisplaySpeed * 10) / 10;

    if (!bIsDrifting)
    {
		if (CurrentFriction < DefaultFriction)
		{
			CurrentFriction = FMath::FInterpTo(CurrentFriction, DefaultFriction, DeltaTime, 20.0f);
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
            DriftTimer += DeltaTime * (30 * (DefaultFriction - DriftFriction));
        }
		else
		{
			DriftTimer = DriftMaxTime;
		}
    }

	// Boosting Debug
	// Drift Timer
	GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Red, FString::Printf(TEXT("DriftTimer: %f"), DriftTimer));
    // Boost Force
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, FString::Printf(TEXT("BoostForce: %f"), 500.0f * (DriftTimer - DisplaySpeed)));
	// Current Friction
	GEngine->AddOnScreenDebugMessage(2, 5.f, FColor::Red, FString::Printf(TEXT("CurrentFriction: %f"), CurrentFriction));

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

