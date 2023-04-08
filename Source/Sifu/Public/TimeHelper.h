#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESCDateTimeTextStyle.h"
#include "TimeHelper.generated.h"

class UObject;
class UWorld;

UCLASS(Blueprintable)
class SIFU_API UTimeHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTimeHelper();
    UFUNCTION(BlueprintCallable)
    static float GetDiffBetweenToDateTimeInSeconds(const FDateTime& _dateTimeA, const FDateTime& _dateTimeB);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime GetCurrentSynchedTimeInDateTime(const UWorld* _world);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static float BPF_GetDeltaTimeSlowMotionIndependant(UObject* _worldContextObject, float _fCurrentDt, float _fSlowMotionFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText BPF_AsTimeZoneTime(const FDateTime& _inDateTime, const ESCDateTimeTextStyle _eDateStyle, const ESCDateTimeTextStyle _eTimeStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText BPF_AsTimeZoneDate(const FDateTime& _inDateTime, const ESCDateTimeTextStyle _eDateStyle);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime AddDelayToDateTime(const FDateTime& _dateTime, float _fDelayInSeconds);
    
};

