// Fill out your copyright notice in the Description page of Project Settings.

#include "Teleporter.h"
#include "Components/BoxComponent.h"
#include "BaseChaosCar.h"

// Sets default values
ATeleporter::ATeleporter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	RootComponent = CollisionBox;

	// Initialize the TeleportLocations array
	TeleportLocations = TArray<FTeleportLocation>();

	// Set collision settings
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	// Bind the overlap event
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATeleporter::OnOverlap);
}

// Called when the game starts or when spawned
void ATeleporter::BeginPlay()
{
	Super::BeginPlay();
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATeleporter::OnOverlap);
	UE_LOG(LogTemp, Warning, TEXT("Test 0"));
	CollisionBox->SetHiddenInGame(false);
}

// Called every frame
void ATeleporter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called when a car overlaps the teleporter
void ATeleporter::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor*
	OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("TEST 1"));
	// Check if the actor is a car
	if (OtherActor->IsA(ABaseChaosCar::StaticClass()))
	{
		// Cast the actor to a car
		Car = Cast<ABaseChaosCar>(OtherActor);
		UE_LOG(LogTemp, Warning, TEXT("TEST 2"));

		// Get the teleport location index from the length of the teleport locations array
		int LocationIndex = FMath::RandRange(0, TeleportLocations.Num() - 1);

		// Teleport the car
		TeleportActor(Car, LocationIndex);

		// Clear the car cast
		Car = nullptr;
	}
}

// Called when a car needs to be teleported
void ATeleporter::TeleportActor(AActor* ActorToTeleport, int LocationIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("TEST 3"));
	// Check if the actor is a car
	if (ActorToTeleport->IsA(ABaseChaosCar::StaticClass()))
	{
		UE_LOG(LogTemp, Warning, TEXT("TEST 4"));
		// Cast the actor to a car
		Car = Cast<ABaseChaosCar>(ActorToTeleport);

		// Check if the location index is valid
		if (LocationIndex >= 0 && LocationIndex < TeleportLocations.Num())
		{
			UE_LOG(LogTemp, Warning, TEXT("TEST 5"));
			// Get the target actor
			AActor* TeleportActor = TeleportLocations[LocationIndex].TeleportActor;
			bool CanTeleport = Cast<ABaseChaosCar>(ActorToTeleport)->CheckTeleportCooldown();

			if (TeleportActor && CanTeleport)
			{
				UE_LOG(LogTemp, Warning, TEXT("TEST 6"));
				// Teleport the car to the target actor's location and rotation
				Car->SetActorLocation(TeleportActor->GetActorLocation(), false, nullptr, ETeleportType::TeleportPhysics);
				Car->SetActorRotation(TeleportActor->GetActorRotation(), ETeleportType::TeleportPhysics);
				UPrimitiveComponent* CarRoot = Cast<UPrimitiveComponent>(Car->GetRootComponent());

				if (CarRoot)
				{
					// Remove all momentum
					CarRoot->SetPhysicsLinearVelocity(FVector::ZeroVector);
					CarRoot->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);

					// Apply the eject speed using the eject rotation	

					TeleportLocations[LocationIndex].EjectRotation = TeleportActor->GetActorRotation();
					TeleportLocations[LocationIndex].EjectRotation.Pitch += TeleportLocations[LocationIndex].EjectRotationOffset;
					Car->SetActorRotation(TeleportActor->GetActorRotation(), ETeleportType::TeleportPhysics);
					CarRoot->AddImpulse(TeleportLocations[LocationIndex].EjectRotation.Vector() * TeleportLocations[LocationIndex].EjectSpeed, NAME_None, true);
					// Clear the car cast
					Car = nullptr;
					// Print EjectRotation.Vector() to screen
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("EjectRotation.Vector(): %s"), *TeleportLocations[LocationIndex].EjectRotation.Vector().ToString()));
				}
			}
		}
	}
}