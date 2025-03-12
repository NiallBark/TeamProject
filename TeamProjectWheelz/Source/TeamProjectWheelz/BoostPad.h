// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
#include "BaseChaosCar.h"
#include "GameFramework/Actor.h"
#include "BoostPad.generated.h"

UCLASS()
class TEAMPROJECTWHEELZ_API ABoostPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoostPad();

	ABaseChaosCar* Car;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Collision Box
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BoostPad")
	UBoxComponent* MyBox;

	//The Boost Amount
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoostPad", meta = (ClampMin = "0.0", ClampMax = "9999.0", UIMin = "0.0", UIMax = "1500.0"))
	float BoostAmount = 1000.0f;

	//When a car overlaps the boost pad
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
