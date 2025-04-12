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

	// The ID of the checkpoint used to identify the checkpoint, Don't change this unless you know what you're doing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	int32 checkpointIndex;

	// Used to select which checkpoint to spawn from the array of possible checkpoints put into "PossibleCheckpointBlueprints". Default is 0
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	int checkpointVariant = 0;

	// Used to set the AI's target speed for this checkpoint, this is the trarget speed going toward the checkpoint from the previous one, this one to the next one. Default is 1.6
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint", meta = (ClampMin = "0.0", ClampMax = "3.0", UIMin = "0.0", UIMax = "2.0"))
	float TargetSpeed = 1.6;

	// Used to set if the AI will skip the next checkpoint if this is true. Used for the begining of a shortcut, not the end or the part that is skipped. Default is false
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	bool bIsShortcut = false;

	// DEPRECATED: Used to set if the checkpoint is a loop or not, this is used for the end of a loop, not the start. Default is false, no longer in use
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	bool bIsLoop = false;
};

USTRUCT(BlueprintType)
struct FCarData
{
	GENERATED_BODY()
	// The ID of the car used to identify the car, Don't change this unless you know what you're doing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	int32 CarID;

	// The distance of the car to the next checkpoint, Don't change this unless you know what you're doing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	float DistanceToNextCheckpoint;

	// The current checkpoint of the car, Don't change this unless you know what you're doing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	int32 CheckpointCounter;

	// The current lap of the car, Don't change this unless you know what you're doing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	int32 LapCounter;

	// The current race position of the car, Don't change this unless you know what you're doing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	int32 Position;
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

	// Number of checkpoints, value is created in the editor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	int NumberOfCheckpoints = 0;

	// Reference to the Blueprint class of the Checkpoint
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	TSubclassOf<ACheckpoint> CheckpointBlueprint;

	// Single reference to a spawned Checkpoint object
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Checkpoint")
	ACheckpoint* Checkpoint;

	// Array of possible checkpoint blueprints to spawn, starts at 0 and goes to the number of checkpoints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	TArray<TSubclassOf<ACheckpoint>> PossibleCheckpointBlueprints;

	// The array of checkpoints to spawn, this is the array of checkpoints that will be spawned in the level, this is where you can edit the checkpoints settings, when changing them and the change isnt there, delete all checkpoints NOT THE MANAGER, and then move a spline node slightly to regenerate the checkpoints with the correct settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	TArray<FCheckpointData> CheckpointDataArray;

	// Array of spawned checkpoints, don't change this unless you know what you're doing.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Checkpoint")
	TArray<ACheckpoint*> SpawnedCheckpoints;

	// Array of stored cars, don't change this unless you know what you're doing.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	TArray<FCarData> CarDataArray;

	// Spline component for defining checkpoint positions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	USplineComponent* SplineComponent;
};