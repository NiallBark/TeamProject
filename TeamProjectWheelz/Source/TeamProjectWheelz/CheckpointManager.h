// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "Checkpoint.h"
#include "CheckpointManager.generated.h"

USTRUCT(BlueprintType)
struct FCheckpointData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	int32 checkpointIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	int checkpointVariant = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	float TargetSpeed = 1.6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	bool bIsShortcut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	bool bIsLoop;
};

UCLASS()
class TEAMPROJECTWHEELZ_API ACheckpointManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACheckpointManager();
	void OnConstruction(const FTransform& Transform);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	int NumberOfCheckpoints = 0;

	// Reference to the Blueprint class of the Checkpoint
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	TSubclassOf<ACheckpoint> CheckpointBlueprint;

	// Single reference to a spawned Checkpoint object
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Checkpoint")
	ACheckpoint* Checkpoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	TArray<TSubclassOf<ACheckpoint>> PossibleCheckpointBlueprints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	TArray<FCheckpointData> CheckpointDataArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Checkpoint")
	TArray<ACheckpoint*> SpawnedCheckpoints;

	// Spline component for defining checkpoint positions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	USplineComponent* SplineComponent;
};