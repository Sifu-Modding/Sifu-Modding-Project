#pragma once
#include "CoreMinimal.h"
#include "EComboAIConditionOnState.generated.h"

UENUM(BlueprintType)
enum class EComboAIConditionOnState : uint8 {
    Started,
    Ended,
    None,
};

