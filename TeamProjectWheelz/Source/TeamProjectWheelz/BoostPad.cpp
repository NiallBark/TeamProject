// Fill out your copyright notice in the Description page of Project Settings.


#include "BoostPad.h"

// Sets default values
ABoostPad::ABoostPad()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBox"));
	RootComponent = MyBox;

}

// Called when the game starts or when spawned
void ABoostPad::BeginPlay()
{
	Super::BeginPlay();
	MyBox->OnComponentBeginOverlap.AddDynamic(this, &ABoostPad::OnOverlap);
	MyBox->SetHiddenInGame(false);
}

// Called every frame
void ABoostPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoostPad::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(ABaseChaosCar::StaticClass()))
	{
		// Cast the actor to a car
		Car = Cast<ABaseChaosCar>(OtherActor);
		UPrimitiveComponent* CarRoot = Cast<UPrimitiveComponent>(Car->GetRootComponent());
		//Add impulse to the car
		CarRoot->AddImpulse(Car->GetActorForwardVector() * BoostAmount, NAME_None, true);
	}
}