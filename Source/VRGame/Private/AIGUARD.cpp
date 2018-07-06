// Fill out your copyright notice in the Description page of Project Settings.

#include "AIGUARD.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"


// Sets default values
AAIGUARD::AAIGUARD()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));

	PawnSensingComp->OnSeePawn.AddDynamic(this, &AAIGUARD::OnPawnSeen);
	PawnSensingComp->OnHearNoise.AddDynamic(This, &AAIGUARD::)
}

// Called when the game starts or when spawned
void AAIGUARD::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAIGUARD::OnPawnSeen(APawn* SeenPawn)
{
	if (SeenPawn == nullptr)
	{
		return;
	}

	DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 32.0f, 12, FColor::Red, false, 10.0f);
}


void OnNoiseHeard(APawn* Instigator, const FVector& Location, float Volume)
{
	if (SeenPawn == nullptr)
	{
		return;
	}

	DrawDebugSphere(GetWorld(), Location, 32.0f, 12, FColor::Green, false, 10.0f);

}

// Called every frame
void AAIGUARD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
