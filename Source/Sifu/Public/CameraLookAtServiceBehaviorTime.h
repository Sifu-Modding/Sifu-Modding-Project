#pragma once
#include "CoreMinimal.h"
#include "ESCBlendType.h"
#include "CameraLookAtServiceBehaviorTime.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FCameraLookAtServiceBehaviorTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReachDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurveReachDurationPerAngleDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCBlendType m_eReachBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ReachCurveDynamic;
    
    FCameraLookAtServiceBehaviorTime();
};

