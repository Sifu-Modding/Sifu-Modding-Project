#pragma once
#include "CoreMinimal.h"
#include "OverridenVariableWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct FOverridenVariableWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOverridenAlpha;
    
    SIFU_API FOverridenVariableWeightInfo();
};

