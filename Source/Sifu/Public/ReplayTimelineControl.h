#pragma once
#include "CoreMinimal.h"
#include "ReplayTimelineControl.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FReplayTimelineControl {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinInputTimeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCursorMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCursorBaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCursorMaxSpeedReachedTimeS;
    
public:
    SIFU_API FReplayTimelineControl();
};

