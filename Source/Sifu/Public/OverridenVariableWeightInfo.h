#pragma once
#include "CoreMinimal.h"
#include "OverridenVariableWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct FOverridenVariableWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName m_Name;
    
    UPROPERTY()
    float m_fOverridenAlpha;
    
    SIFU_API FOverridenVariableWeightInfo();
};

