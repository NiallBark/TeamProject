#pragma once
#include "CheckpointManager.h"
#include "Components/SplineComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h" // For TActorIterator
#include "Checkpoint.h"  // Include the ACheckpoint class
#include "BaseChaosCar.h"

// Sets default values
ACheckpointManager::ACheckpointManager()
{
    PrimaryActorTick.bCanEverTick = true;

    // Initialize the spline component
    SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    SplineComponent->SetupAttachment(RootComponent);

    // Make the spline visible in the editor
    SplineComponent->bDrawDebug = true;
    SplineComponent->SetVisibility(true);
    SplineComponent->SetHiddenInGame(false);
}

// Called when the actor is constructed or updated in the editor
void ACheckpointManager::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    // Map to track checkpoints that are still valid
    TMap<int32, ACheckpoint*> ValidCheckpoints;

    // Reuse or create checkpoints
    if (SplineComponent && PossibleCheckpointBlueprints.Num() > 0)
    {
        int32 NumPoints = SplineComponent->GetNumberOfSplinePoints();
        NumberOfCheckpoints = NumPoints; // Update the manager's NumberOfCheckpoints variable

        // Ensure CheckpointBlueprintIndices matches the number of spline points
        if (CheckpointDataArray.Num() < NumPoints)
        {
            CheckpointDataArray.SetNum(NumPoints);
            for (int32 i = 0; i < NumPoints; i++)
            {
                // Initialize new elements
                if (CheckpointDataArray.IsValidIndex(i))
                {
                    CheckpointDataArray[i].checkpointIndex = i;
                }
            }
        }

        for (int32 i = 0; i < NumPoints; i++)
        {
            FVector Location = SplineComponent->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::World);
            FRotator Rotation = SplineComponent->GetRotationAtSplinePoint(i, ESplineCoordinateSpace::World);

            ACheckpoint* CheckpointInstance = nullptr;

            // Check if a checkpoint already exists for this index
            if (SpawnedCheckpoints.IsValidIndex(i) && IsValid(SpawnedCheckpoints[i]))
            {
                CheckpointInstance = SpawnedCheckpoints[i];
                CheckpointInstance->SetActorLocation(Location);
                CheckpointInstance->SetActorRotation(Rotation);
            }
            else
            {
                if (PossibleCheckpointBlueprints.Num() > 0)
                {
                    FActorSpawnParameters SpawnParams;
                    SpawnParams.Owner = this;
                    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

                    CheckpointInstance = GetWorld()->SpawnActor<ACheckpoint>(CheckpointDataArray[i].checkpointVariant == 0 ? CheckpointBlueprint : PossibleCheckpointBlueprints[CheckpointDataArray[i].checkpointVariant], Location, Rotation, SpawnParams);

                    if (CheckpointInstance)
                    {
                        // Add to the array
                        if (SpawnedCheckpoints.IsValidIndex(i))
                        {
                            SpawnedCheckpoints[i] = CheckpointInstance;
                        }
                        else
                        {
                            SpawnedCheckpoints.Add(CheckpointInstance);
                        }
                    }
                }
            }

            if (CheckpointInstance)
            {
                // Set the target speed for the checkpoint
                CheckpointInstance->TargetSpeed = CheckpointDataArray[i].TargetSpeed;
                
                // Adjust the location by 50% of the box's height using GetBoxHeight
                float BoxHeightOffset = CheckpointInstance->GetBoxHeight();
                Location.Z += BoxHeightOffset;
                CheckpointInstance->SetActorLocation(Location);

                // Set the checkpoint number
                CheckpointInstance->CheckpointNumber = i;
                CheckpointInstance->TargetSpeed = CheckpointDataArray[i].TargetSpeed;
                CheckpointInstance->isLoop = CheckpointDataArray[i].bIsLoop;
                CheckpointInstance->IsShortCut = CheckpointDataArray[i].bIsShortcut;

                // Update the display name
                CheckpointInstance->SetActorLabel(FString::Printf(TEXT("Checkpoint %d"), i));

                // Attach to the manager
                CheckpointInstance->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);

                // Mark this checkpoint as valid
                ValidCheckpoints.Add(i, CheckpointInstance);
            }
        }
    }

    // Remove unused checkpoints
    for (int32 i = 0; i < SpawnedCheckpoints.Num(); i++)
    {
        if (!ValidCheckpoints.Contains(i) && IsValid(SpawnedCheckpoints[i]))
        {
            SpawnedCheckpoints[i]->Destroy();
            SpawnedCheckpoints[i] = nullptr;
        }
    }

    // Clean up null entries in the array
    SpawnedCheckpoints.RemoveAll([](ACheckpoint* Checkpoint) { return !IsValid(Checkpoint); });
}

// Called when the game starts or when spawned
void ACheckpointManager::BeginPlay()
{
	int CarIDNum = 0;
    Super::BeginPlay();
	// Fill up the CarData array with the number of cars
	for (TActorIterator<ABaseChaosCar> It(GetWorld()); It; ++It)
	{
		ABaseChaosCar* Car = *It;
		if (Car)
		{
		    // Add slot to the PositionChecker array
		    PositionChecker.Add(FPositionChecker());
		
			FCarData CarData;
			//Set CarID to the current index of the loop
            CarData.CarID = CarIDNum;
			CarIDNum++;
			Car->CarID = CarData.CarID;
			CarData.Position = 0; // Initialize position to 0 or any other default value
			CarDataArray.Add(CarData);
			
			TArray<FString> WeakAINames = WeakDriverNames;
			TArray<FString> StrongAINames = StrongDriverNames;

		    if (Car->IsAI)
		    {
		        if (Car->IsAISmart)
		        {
		            //Set a name for the AI dirver
		            int RandomIndex = FMath::RandRange(0, StrongAINames.Num() - 1);
		            Car->DriverName = StrongAINames[RandomIndex];
		            PositionChecker[CarIDNum - 1].DriverName = StrongAINames[RandomIndex];
		            StrongAINames.RemoveAt(RandomIndex);                         
		        }
		        else
		        {
		            //Set a name for the AI dirver
		            int RandomIndex = FMath::RandRange(0, WeakAINames.Num() - 1);
		            Car->DriverName = WeakAINames[RandomIndex];
		            PositionChecker[CarIDNum - 1].DriverName = WeakAINames[RandomIndex];
		            WeakAINames.RemoveAt(RandomIndex);
		        }
		    }
		}
	}
}

// Called every frame
void ACheckpointManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // For each value in the PositionChecker array, add in the CarID from the CarData array and then the RacePositionValue
    for (int32 i = 0; i < PositionChecker.Num(); i++)
    {
        if (PositionChecker.IsValidIndex(i))
        {
            PositionChecker[i].CarID = CarDataArray[i].CarID;
            PositionChecker[i].RacePositionValue = CarDataArray[i].RacePositionValue;
        }
    }
    
    // Sort the PositionChecker array based on RacePositionValue
    PositionChecker.Sort([](const FPositionChecker& A, const FPositionChecker& B)
    {
        return A.RacePositionValue > B.RacePositionValue;
    });
    
    // Go through the PositionChecker array and set the RacePosition value in the CarData array
    for (int32 i = 0; i < PositionChecker.Num(); i++)
    {
        if (PositionChecker.IsValidIndex(i))
        {
            int32 CarID = PositionChecker[i].CarID;
            if (CarDataArray.IsValidIndex(CarID))
            {
                CarDataArray[CarID].Position = i + 1; // Set the RacePosition value
            }
        }
    }
}