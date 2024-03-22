// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ManasoupGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MANASOUPGJ3_API UManasoupGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float CurrentVolume = 0.7f;
	
};
