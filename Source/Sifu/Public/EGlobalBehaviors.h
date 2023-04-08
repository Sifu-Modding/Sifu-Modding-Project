#pragma once
#include "CoreMinimal.h"
#include "EGlobalBehaviors.generated.h"

UENUM(BlueprintType)
enum class EGlobalBehaviors : uint8 {
    Idle,
    Suspicious,
    Surprised,
    Alerted,
    Abandoning,
    Friendly,
    Count,
    None,
};

