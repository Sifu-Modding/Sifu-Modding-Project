#pragma once
#include "CoreMinimal.h"
#include "ReplayCameraMeshFadingData.h"
#include "ReplayTimelineControllerData.generated.h"

USTRUCT(BlueprintType)
struct FReplayTimelineControllerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayCameraMeshFadingData m_CameraMeshFadingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraFollowDampingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraFollowMaxDistanceLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSavekeyModelFrequency;
    
    SIFU_API FReplayTimelineControllerData();
};

