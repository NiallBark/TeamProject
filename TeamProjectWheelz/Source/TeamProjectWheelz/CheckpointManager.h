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
	float TargetSpeed = 2.5;

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

	// Race position value taken from the car to determine what position the car is in
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	float RacePositionValue;

	// The current race position of the car, Don't change this unless you know what you're doing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	int32 Position;
	
	// Racer's name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	FString DriverName = "You";
};

USTRUCT(BlueprintType)
struct FPositionChecker
{
    GENERATED_BODY()
    // The ID of the car used to identify the car, Don't change this unless you know what you're doing
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    int32 CarID;
    // The taken RacePositionValue from the car to determine what position the car is in
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    float RacePositionValue;
    // Racer's name
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
    FString DriverName = "You";
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

	// Number of laps, value is created her in the blueprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	int NumberOfLaps = 3;	

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
	
	// Array for checking what position the cars are in
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	TArray<FPositionChecker> PositionChecker;

	// Spline component for defining checkpoint positions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	USplineComponent* SplineComponent;
	
	// An array of names for the weak AI drivers
    	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
    	TArray<FString> WeakDriverNames = {   TEXT("Blaze Thunder"),
                                              TEXT("Turbo Max"),
                                              TEXT("Speedy Wheels"),
                                              TEXT("Nitro Nate"),
                                              TEXT("Zoom Zoomerson"),
                                              TEXT("Rocket Ronny"),
                                              TEXT("Flash Vroom"),
                                              TEXT("Lightning Lance"),
                                              TEXT("Skid McZoom"),
                                              TEXT("Axel Blaze"),
                                              TEXT("Jetstream Jimmy"),
                                              TEXT("Viper Vinnie"),
                                              TEXT("Crash Boom"),
                                              TEXT("Blaze McFast"),
                                              TEXT("Zoomy Zack"),
                                              TEXT("Drift Danger"),
                                              TEXT("Nitro Nelly"),
                                              TEXT("Screech Racer"),
                                              TEXT("Lightning Logan"),
                                              TEXT("Turbo Tina"),
                                              TEXT("Max Overdrive"),
                                              TEXT("Speedstorm Sammy"),
                                              TEXT("Sonic Blaze"),
                                              TEXT("Captain Vroom"),
                                              TEXT("Rocket Riley"),
                                              TEXT("Blaze McTurbo"),
                                              TEXT("Nitro Nick"),
                                              TEXT("Drift Dingo"),
                                              TEXT("Fast Freddie"),
                                              TEXT("Zippy Zoom"),
                                              TEXT("Hot Rod Hank"),
                                              TEXT("Crash Carley"),
                                              TEXT("Axel Zoomer"),
                                              TEXT("Thunder Wheels"),
                                              TEXT("Flame Speedster"),
                                              TEXT("Revvin’ Rex"),
                                              TEXT("Blaze Bolt"),
                                              TEXT("Wacky Wheels"),
                                              TEXT("Drifty Dan"),
                                              TEXT("Supersonic Sue"),
                                              TEXT("Flamey McZoom"),
                                              TEXT("Screamin’ Steve"),
                                              TEXT("Max Nitro"),
                                              TEXT("Vrooma Looma"),
                                              TEXT("Speedy Spark"),
                                              TEXT("Tire Screech Tommy"),
                                              TEXT("Nitro Nova"),
                                              TEXT("Jet Zoomer"),
                                              TEXT("Dash Danger"),
                                              TEXT("Rocket Roxy"),
                                              TEXT("Blaze Machine"),
                                              TEXT("Crashy Carl"),
                                              TEXT("Vroomy Vince"),
                                              TEXT("Twisty Tires"),
                                              TEXT("Hot Wheel Harry"),
                                              TEXT("Speedella"),
                                              TEXT("Dragstrip Drew"),
                                              TEXT("Zoominator"),
                                              TEXT("Fasttrack Frankie"),
                                              TEXT("Burnout Bob"),
                                              TEXT("Nitro Ninja"),
                                              TEXT("Sparky Zoom"),
                                              TEXT("Lightning Lulu"),
                                              TEXT("Driftstorm Dave"),
                                              TEXT("Zipper Zap"),
                                              TEXT("Blaze-a-tron"),
                                              TEXT("Screechy Pete"),
                                              TEXT("Hyper Hank"),
                                              TEXT("Speedy Sally"),
                                              TEXT("Flaming Finn"),
                                              TEXT("Thunder Track"),
                                              TEXT("Axle Axel"),
                                              TEXT("Fastzilla"),
                                              TEXT("Turbo Ty"),
                                              TEXT("Boom Zoom"),
                                              TEXT("Velocity Vicky"),
                                              TEXT("Danger Wheels"),
                                              TEXT("Turbo Tornado"),
                                              TEXT("Crash Machine"),
                                              TEXT("Max Vroom"),
                                              TEXT("Racey Macey"),
                                              TEXT("Firetrack Finn"),
                                              TEXT("Dash McZoom"),
                                              TEXT("Rev Rocket"),
                                              TEXT("Vroomba"),
                                              TEXT("Drift Queen"),
                                              TEXT("Nitro Flash"),
                                              TEXT("Zoomy Lou"),
                                              TEXT("Speedbot 3000"),
                                              TEXT("Crashington"),
                                              TEXT("Axle X"),
                                              TEXT("Blaze Tastic"),
                                              TEXT("Sonic Steve"),
                                              TEXT("Wheely McSpeed"),
                                              TEXT("Fast Maxine"),
                                              TEXT("Rocket Wheels"),
                                              TEXT("Screecharoo"),
                                              TEXT("Burnout Brenda"),
                                              TEXT("The Zoomster"),
                                              TEXT("Lightning Blazer")};
                                          
        // An array of names for the strong AI drivers
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
        TArray<FString> StrongDriverNames = {   TEXT("The Kunk"),
                                                TEXT("Noel Burger"),
        										TEXT("Kodzuuken"),
                                                TEXT("Tiny Turtleeee"),
                                                TEXT("Sunny Bunny"),
                                                TEXT("Crimson Imp"),
                                                TEXT("Null 1551")
                                                TEXT("Big Mon D"),
                                                TEXT("D_E_B_A_N"),
                                                TEXT("GR Fournd"),
                                                TEXT("Jam3s 2004"),
                                                TEXT("Yuxxi"),
                                                TEXT("Speedy Eyeball"),
                                                TEXT("The Heff")};
};