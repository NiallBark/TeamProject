// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
#include "BaseChaosCar.h"
#include "Teleporter.generated.h"

USTRUCT(BlueprintType)
struct FTeleportLocation
{
	GENERATED_BODY()

	// The location and rotation of the teleporter, to use this create a blank actor and place it where you want the actor to be teleported, then drag the actor into the TeleportActor variable. if you're having trouble come ask Gabe or Niall
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Teleporter")
	AActor* TeleportActor;

	// The speed at which the actor will be ejected
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Teleporter", meta = (ClampMin = "-999.0", ClampMax = "9999.0", UIMin = "0.0", UIMax = "1500.0"))
	float EjectSpeed = 1200.0f;

	// The rotation of the actor when it is ejected
	FRotator EjectRotation;

	// The offset of the rotation of the actor when it is ejected compared to the teleport location rotation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Teleporter", meta = (ClampMin = "0", ClampMax = "360", UIMin = "0.0", UIMax = "90"))
	float EjectRotationOffset = 20.0f;
};

UCLASS()
class TEAMPROJECTWHEELZ_API ATeleporter : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATeleporter();

	// The Car
	ABaseChaosCar* Car;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Collision Box
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Teleporter")
	UBoxComponent* CollisionBox;

	// Teleport Location array
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Teleporter")
	TArray<FTeleportLocation> TeleportLocations;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Teleport the actor
	UFUNCTION(BlueprintCallable, Category = "Teleporter")
	void TeleportActor(AActor* ActorToTeleport, int LocationIndex);

	// When a car overlaps the teleporter
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
