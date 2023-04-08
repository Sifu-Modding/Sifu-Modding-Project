#pragma once
#include "CoreMinimal.h"
#include "DefenseGauge.generated.h"

USTRUCT(BlueprintType)
struct FDefenseGauge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCooldownBeforeRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRecoveryRatePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRecoveryRatePerSecWhenComplete;
    
    SIFU_API FDefenseGauge();
};

