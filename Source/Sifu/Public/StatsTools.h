#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAttributeScales.h"
#include "StatsTools.generated.h"

UCLASS(BlueprintType)
class SIFU_API UStatsTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStatsTools();
    UFUNCTION(BlueprintPure)
    static EAttributeScales ConvertFloatToAttributeScale(float _fValue);
    
    UFUNCTION(BlueprintPure)
    static float ConvertAttributeScaleToFloat(EAttributeScales _eAttributeScale);
    
    UFUNCTION(BlueprintPure)
    static FText BPF_GetTextFromFloatAttributeScale(float _scale);
    
    UFUNCTION(BlueprintPure)
    static FText BPF_GetTextFromAttributeScale(EAttributeScales _eScale);
    
};

