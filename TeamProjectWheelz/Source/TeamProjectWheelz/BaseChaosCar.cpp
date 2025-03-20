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
    DriftMaxTime = 5.f; // Example value, adjust as needed
}

void ABaseChaosCar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("LookLeft", IE_Repeat, this, &ABaseChaosCar::LookLeft);
    PlayerInputComponent->BindAction("LookRight", IE_Repeat, this, &ABaseChaosCar::LookRight);
    PlayerInputComponent->BindAction("LookBack", IE_Repeat, this, &ABaseChaosCar::LookBack);
    PlayerInputComponent->BindAction("Drift", IE_Pressed, this, &ABaseChaosCar::Drift);
    PlayerInputComponent->BindAction("Drift", IE_Released, this, &ABaseChaosCar::StopDrift);
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
    if (DriftTimer <= DriftMaxTime)
    {
        DriftTimer += GetWorld()->GetDeltaSeconds();
    }
}

void ABaseChaosCar::StopDrift()
{
    // Apply forward force to the car
    FVector ForwardForce = GetActorForwardVector() * 1000000.f * DriftTimer;
    //GetVehicleMovement()->AddForce(ForwardForce);
    DriftTimer = 0.f;
}
void ABaseChaosCar::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TeleportCooldownTimer -= DeltaTime;
    TrueSpeed = GetVehicleMovement()->GetForwardSpeed();
    DisplaySpeed = FMath::Abs(TrueSpeed) / 1280.0f;
    DisplaySpeed = FMath::RoundToFloat(DisplaySpeed * 10) / 10;

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

