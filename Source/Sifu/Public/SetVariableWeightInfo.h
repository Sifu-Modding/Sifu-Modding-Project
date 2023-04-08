#pragma once
#include "CoreMinimal.h"
#include "SetVariableWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct FSetVariableWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOverrideDuration;
    
    SIFU_API FSetVariableWeightInfo();
};

