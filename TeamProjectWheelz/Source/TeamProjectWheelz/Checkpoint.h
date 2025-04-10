// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Checkpoint.generated.h"

UCLASS()
class TEAMPROJECTWHEELZ_API ACheckpoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACheckpoint();

	// Get box height
	UFUNCTION(BlueprintCallable, Category = "Checkpoint")
	float GetBoxHeight() const { return MyBox->GetScaledBoxExtent().Z; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Checkpoint Hitbox
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	UBoxComponent* MyBox;

	//Checkpoint Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	UStaticMeshComponent* MyMesh;

	//Checkpoint AI Target Point
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	UBoxComponent* AiTargetPoint;

	//Checkpoint Smart AI Target Point
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	UBoxComponent* SmartAiTargetPoint;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Checkpoint AI Target Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	float TargetSpeed = 2.0f;

	//Checkpoint Number
	UPROPERTY(EditAnywhere, Category = "Checkpoint")
	int CheckpointNumber;

	//Checkpoint Loop Check
	UPROPERTY(EditAnywhere, Category = "Checkpoint")
	bool isLoop = false;

	//Is The Checkpoint A Valid ai Shortcut
	UPROPERTY(EditAnywhere, Category = "Checkpoint")
	bool IsShortCut = false;

	//When the player overlaps the checkpoint
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//Get Ai Target Point
	UFUNCTION(BlueprintCallable, Category = "Checkpoint")
	FVector GetAiTargetPoint(bool IsSmart, int LocationDeviation);

};
