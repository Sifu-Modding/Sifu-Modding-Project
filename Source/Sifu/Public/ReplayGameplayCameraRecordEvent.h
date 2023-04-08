#pragma once
#include "CoreMinimal.h"
#include "ReplayCameraTransform.h"
#include "ReplaySerializedEvent.h"
#include "ReplayGameplayCameraRecordEvent.generated.h"

USTRUCT(BlueprintType)
struct FReplayGameplayCameraRecordEvent : public FReplaySerializedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayCameraTransform m_FirstFrameCameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayCameraTransform m_LastFrameCameraTransform;
    
    SIFU_API FReplayGameplayCameraRecordEvent();
};

