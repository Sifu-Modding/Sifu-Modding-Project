#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "LookAtLimits.generated.h"

USTRUCT(BlueprintType)
struct FLookAtLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fYawLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_pitchLimitByYaw;
    
    SIFU_API FLookAtLimits();
};

