#pragma once
#include "CoreMinimal.h"
#include "ETimelineStateAction.generated.h"

UENUM(BlueprintType)
enum class ETimelineStateAction : uint8 {
    None,
    Undo,
    Redo,
};

