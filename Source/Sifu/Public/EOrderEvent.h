#pragma once
#include "CoreMinimal.h"
#include "EOrderEvent.generated.h"

UENUM(BlueprintType)
enum class EOrderEvent : uint8 {
    Starting,
    Started,
    Ending,
    Ended,
};

