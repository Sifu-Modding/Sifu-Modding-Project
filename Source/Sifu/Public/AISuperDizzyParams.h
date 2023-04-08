#pragma once
#include "CoreMinimal.h"
#include "AISuperDizzyParams.generated.h"

USTRUCT(BlueprintType)
struct FAISuperDizzyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanBeSuperDizzy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyRecoveryCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyRecoveryCooldownWhenComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyGaugeRatioAfterSuperDizzy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuperDizzyRecoveryPerSec;
    
    SIFU_API FAISuperDizzyParams();
};

