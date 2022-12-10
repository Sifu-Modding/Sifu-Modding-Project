#pragma once
#include "CoreMinimal.h"
#include "AddVariableWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct FAddVariableWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName m_Name;
    
    UPROPERTY()
    bool m_bMirror;
    
    SIFU_API FAddVariableWeightInfo();
};

