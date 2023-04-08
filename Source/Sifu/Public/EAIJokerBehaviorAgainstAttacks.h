#pragma once
#include "CoreMinimal.h"
#include "EAIJokerBehaviorAgainstAttacks.generated.h"

UENUM(BlueprintType)
enum class EAIJokerBehaviorAgainstAttacks : uint8 {
    Ignore,
    CancelAttacksInMoveToState,
    CancelAttackMidComboDeferred,
    CancelAttacksInAnyStateDeferred,
    CancelAttacksMidComboInstant,
    CancelAttacksInAnyStateInstant,
};

