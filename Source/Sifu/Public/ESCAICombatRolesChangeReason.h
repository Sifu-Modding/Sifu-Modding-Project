#pragma once
#include "CoreMinimal.h"
#include "ESCAICombatRolesChangeReason.generated.h"

UENUM(BlueprintType)
enum class ESCAICombatRolesChangeReason : uint8 {
    AIDeath,
    AITakenDown,
    Script,
    BehaviorChanged,
    AlertLevelChanged,
    MCDominationGaugeChanged,
    MCTraversalPerformed,
    MCRush,
    MCFall,
    AttackTicketTimeout,
};

