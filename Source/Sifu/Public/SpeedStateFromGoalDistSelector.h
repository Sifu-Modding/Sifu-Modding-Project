#pragma once
#include "CoreMinimal.h"
#include "ESpeedState.h"
#include "SpeedStateFromGoalDistSelector.generated.h"

USTRUCT(BlueprintType)
struct FSpeedStateFromGoalDistSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eNearFromGoalSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDistToGoalThresold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eFarFromGoalSpeedState;
    
    SIFU_API FSpeedStateFromGoalDistSelector();
};

