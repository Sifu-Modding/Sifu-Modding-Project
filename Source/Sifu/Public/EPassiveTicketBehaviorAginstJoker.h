#pragma once
#include "CoreMinimal.h"
#include "EPassiveTicketBehaviorAginstJoker.generated.h"

UENUM(BlueprintType)
enum class EPassiveTicketBehaviorAginstJoker : uint8 {
    IgnoreAllJokers,
    FailWhenAnyJokerActive,
    TryCancelCurrentAttacksOnly,
};

