// Fill out your copyright notice in the Description page of Project Settings.

#include "CombatModeEnemy_C.h"

// Sets default values
ACombatModeEnemy_C::ACombatModeEnemy_C()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACombatModeEnemy_C::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACombatModeEnemy_C::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACombatModeEnemy_C::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

