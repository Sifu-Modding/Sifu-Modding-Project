#pragma once
#include "CoreMinimal.h"
#include "EActivityPendingStateUpdate.generated.h"

UENUM(BlueprintType)
enum class EActivityPendingStateUpdate : uint8 {
    Enabling,
    Starting,
    Ending,
    Reset,
};

