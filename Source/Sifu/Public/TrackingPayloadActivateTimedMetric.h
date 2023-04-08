#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadActivateTimedMetric.generated.h"

USTRUCT(BlueprintType)
struct FTrackingPayloadActivateTimedMetric {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 offsetPlaytime;
    
    SIFU_API FTrackingPayloadActivateTimedMetric();
};

