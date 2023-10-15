// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerContoller.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerContoller : public APlayerController
{
	GENERATED_BODY()
public:
	AAuraPlayerContoller();
	
protected:
	virtual void BeginPlay() override;

private:
	TObjectPtr<UInputMappingContext> AuraContext;
};
