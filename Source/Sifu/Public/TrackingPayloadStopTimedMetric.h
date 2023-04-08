#pragma once
#include "CoreMinimal.h"
#include "TrackingPayloadStopTimedMetric.generated.h"

USTRUCT(BlueprintType)
struct FTrackingPayloadStopTimedMetric {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 offsetPlaytime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    SIFU_API FTrackingPayloadStopTimedMetric();
};

