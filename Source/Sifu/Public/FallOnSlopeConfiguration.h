#pragma once
#include "CoreMinimal.h"
#include "FallOnSlopeConfiguration.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FFallOnSlopeConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWakeVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ImpulseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLinearDamping;
    
    SIFU_API FFallOnSlopeConfiguration();
};

