#pragma once
#include "CoreMinimal.h"
#include "EALPriority.generated.h"

UENUM(BlueprintType)
enum class EALPriority : uint8 {
    Default,
    BlockingFightingState,
    Prediction,
    TutorialTestInput,
};

