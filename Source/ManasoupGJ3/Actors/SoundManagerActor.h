// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SoundManagerActor.generated.h"

UCLASS()
class MANASOUPGJ3_API ASoundManagerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASoundManagerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Music")
	TArray<USoundWave*> M_GameplayMusic;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Music")
	TArray<USoundWave*> M_MainMenuMusic;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Music")
	TArray<USoundWave*> M_PauseMenuMusic;
	
	// MOVEMENT
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Movement")
	TArray<USoundWave*> M_AliveFootsteps;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Movement")
	TArray<USoundWave*> M_GhostFootsteps;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Movement")
	TArray<USoundWave*> M_AliveJump;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Movement")
	TArray<USoundWave*> M_GhostJump;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Movement")
	TArray<USoundWave*> M_AliveLand;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Movement")
	TArray<USoundWave*> M_GhostLand;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Movement")
	TArray<USoundWave*> M_WallJump;

	// DEATH
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Death")
	TArray<USoundWave*> M_AliveDead;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Death")
	TArray<USoundWave*> M_GhostDead;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|Death")
	TArray<USoundWave*> M_Resurrection;

	// ETC
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|UI")
	TArray<USoundWave*> M_ButtonSelected;

	// LEVEL COMPONENTS
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Sounds|LevelComponents")
	TArray<USoundWave*> M_Wind;
};
