// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIGUARD.generated.h"

class UPawnSensingComponent;

UCLASS()
class VRGAME_API AAIGUARD : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIGUARD();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, Category = "Component")
	UPawnSensingComponent* PawnSensingComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
