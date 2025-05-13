// Fill out your copyright notice in the Description page of Project Settings.


#include "Checkpoint.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "BaseChaosCar.h"

// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBox"));
	AiTargetPoint = CreateDefaultSubobject<UBoxComponent>(TEXT("AiTargetPoint"));
	SmartAiTargetPoint = CreateDefaultSubobject<UBoxComponent>(TEXT("SmartAiTargetPoint"));
	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	MyBox->SetGenerateOverlapEvents(true);
	RootComponent = MyBox;
	MyMesh->SetupAttachment(RootComponent);
	AiTargetPoint->SetupAttachment(RootComponent);
	SmartAiTargetPoint->SetupAttachment(RootComponent);

	MyBox->OnComponentBeginOverlap.AddDynamic(this, &ACheckpoint::OnOverlap);

	// Set default size for MyBox
	MyBox->SetBoxExtent(FVector(32.0f, 400.0f, 200.0f));
}

// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();
	MyBox->OnComponentBeginOverlap.AddDynamic(this, &ACheckpoint::OnOverlap);
}

// Called every frame
void ACheckpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACheckpoint::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(ABaseChaosCar::StaticClass()))
	{
		int LapCounter = Cast<ABaseChaosCar>(OtherActor)->LapCounter;
		if (LapCounter >= 0)
		{
			//compare the checkpoint number with the base chaos car's checkpoint number
			if (isLoop)
			{
				Cast<ABaseChaosCar>(OtherActor)->UpdateCheckpointCounter(CheckpointNumber, MyBox->GetComponentLocation(), MyBox->GetComponentRotation());
				Cast<ABaseChaosCar>(OtherActor)->CompleteLap();
				return;
			}
			else if (CheckpointNumber == Cast<ABaseChaosCar>(OtherActor)->CheckpointCounter || CheckpointNumber ==
	(Cast<ABaseChaosCar>(OtherActor)->CheckpointCounter - 1) % Cast<ABaseChaosCar>(OtherActor)->CheckpointLimit || CheckpointNumber == (Cast<ABaseChaosCar>(OtherActor)->CheckpointCounter + 1) % Cast<ABaseChaosCar>(OtherActor)->CheckpointLimit)
			{
				//Debug show Checkpoint and CheckpointCounter
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Checkpoint: %d CheckpointCounter: %d"), CheckpointNumber, Cast<ABaseChaosCar>(OtherActor)->CheckpointCounter));
				Cast<ABaseChaosCar>(OtherActor)->UpdateCheckpointCounter(CheckpointNumber, MyBox->GetComponentLocation(), MyBox->GetComponentRotation());
				return;
			}
			else
			{
				//Debug show Checkpoint and CheckpointCounter
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Checkpoint: %d CheckpointCounter: %d"), CheckpointNumber, Cast<ABaseChaosCar>(OtherActor)->CheckpointCounter));
				Cast<ABaseChaosCar>(OtherActor)->ResetCar();
				return;
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("LapCounter %d is out of bounds for RacePosition array"), LapCounter);
			return;
		}
	}
}

FVector ACheckpoint::GetAiTargetPoint(bool IsSmart, int LocationDeviation)
{
	// generate a random number between -LocationDeviation and LocationDeviation
	int RandomDeviation = FMath::RandRange(-LocationDeviation, LocationDeviation);
	
	if (IsSmart)
	{
		// Get the local location of the SmartAiTargetPoint and add the random deviation to the X value
		// then return the world location
		return SmartAiTargetPoint->GetComponentLocation() + FVector(RandomDeviation, 0, 0);
	}
	else
	{
		// Get the local location of the AiTargetPoint and add the random deviation to the X value
		// then return the world location
		return AiTargetPoint->GetComponentLocation() + FVector(RandomDeviation, 0, 0);
	}
}