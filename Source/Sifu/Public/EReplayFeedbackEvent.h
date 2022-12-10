#pragma once
#include "CoreMinimal.h"
#include "EReplayFeedbackEvent.generated.h"

UENUM()
enum class EReplayFeedbackEvent : uint8 {
    RecordingReachedTimeLimit,
    RecordingMinimalTimeNotReached,
    RecordingComplete,
    RecordingError,
    RecordingReachedMaxSize,
    NotEnoughSpace,
    Count,
    Invalid,
};

