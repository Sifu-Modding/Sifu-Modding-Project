#pragma once
#include "CoreMinimal.h"
#include "EAIAttackBehaviorState.generated.h"

UENUM(BlueprintType)
enum class EAIAttackBehaviorState : uint8 {
    None,
    Cancelled,
    MoveToTarget,
    PrepareAttack,
    PrepareAttackAction,
    PrepareAttackFollowup,
    Attacking,
};

