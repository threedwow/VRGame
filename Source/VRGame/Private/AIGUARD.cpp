// Fill out your copyright notice in the Description page of Project Settings.

#include "AIGUARD.h"
#include "Perception/PawnSensingComponent.h"


// Sets default values
AAIGUARD::AAIGUARD()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
}

// Called when the game starts or when spawned
void AAIGUARD::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAIGUARD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
