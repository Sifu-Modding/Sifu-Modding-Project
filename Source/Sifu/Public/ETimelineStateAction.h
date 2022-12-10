#pragma once
#include "CoreMinimal.h"
#include "ETimelineStateAction.generated.h"

UENUM()
enum class ETimelineStateAction : uint8 {
    None,
    Undo,
    Redo,
};

