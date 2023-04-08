#pragma once
#include "CoreMinimal.h"
#include "EHelpSignalTriggerCause.generated.h"

UENUM(BlueprintType)
enum class EHelpSignalTriggerCause : uint8 {
    Striked,
    StructureBroken,
    Pushed,
    KnockedDown,
    Dizzy,
    PushedFromGrab,
    Count,
    None,
};

