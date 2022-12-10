#pragma once
#include "CoreMinimal.h"
#include "AISuperDizzyParams.generated.h"

USTRUCT(BlueprintType)
struct FAISuperDizzyParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bCanBeSuperDizzy;
    
    UPROPERTY(EditAnywhere)
    float m_fSuperDizzyResistance;
    
    UPROPERTY(EditAnywhere)
    float m_fSuperDizzyRecoveryCooldown;
    
    UPROPERTY(EditAnywhere)
    float m_fSuperDizzyRecoveryCooldownWhenComplete;
    
    UPROPERTY(EditAnywhere)
    float m_fSuperDizzyGaugeRatioAfterSuperDizzy;
    
    UPROPERTY(EditAnywhere)
    float m_fSuperDizzyRecoveryPerSec;
    
    SIFU_API FAISuperDizzyParams();
};

