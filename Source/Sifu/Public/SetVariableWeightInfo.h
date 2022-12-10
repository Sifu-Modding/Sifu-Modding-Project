#pragma once
#include "CoreMinimal.h"
#include "SetVariableWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct FSetVariableWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName m_Name;
    
    UPROPERTY()
    bool m_bBlendOut;
    
    UPROPERTY()
    bool m_bOverride;
    
    UPROPERTY()
    float m_fOverrideDuration;
    
    SIFU_API FSetVariableWeightInfo();
};

