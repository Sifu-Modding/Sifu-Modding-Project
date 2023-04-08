#pragma once
#include "CoreMinimal.h"
#include "EMoveStatus.h"
#include "ESpeedState.h"
#include "LookAtLimits.h"
#include "LookAtLocomotionLimits.generated.h"

USTRUCT(BlueprintType)
struct FLookAtLocomotionLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveStatus m_eMoveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtLimits m_limits;
    
    SIFU_API FLookAtLocomotionLimits();
};

