// Fill out your copyright notice in the Description page of Project Settings.


#include "W_AnimatedCharacter.h"

// Sets default values
AW_AnimatedCharacter::AW_AnimatedCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AW_AnimatedCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AW_AnimatedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AW_AnimatedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

