#pragma once
#include "CoreMinimal.h"
#include "ReplayCameraMeshFadingData.h"
#include "ReplayTimelineControllerData.generated.h"

USTRUCT(BlueprintType)
struct FReplayTimelineControllerData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FReplayCameraMeshFadingData m_CameraMeshFadingData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCameraFollowDampingValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCameraFollowMaxDistanceLerp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSavekeyModelFrequency;
    
    SIFU_API FReplayTimelineControllerData();
};

