// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StartTimer.generated.h"

/**
 * 
 */
UCLASS()
class BRAYANLASTEXAM_API UStartTimer : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimerValue;

protected:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
};
