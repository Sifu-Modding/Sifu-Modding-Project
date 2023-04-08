#pragma once
#include "CoreMinimal.h"
#include "EAIWuguanTicketEvaluation.generated.h"

UENUM(BlueprintType)
enum class EAIWuguanTicketEvaluation : uint8 {
    IsOnScreen,
    FlyDistance,
    PathDistance,
    TimeSinceLastAttack,
    TimeToReachLocation,
    LastTimeOnScreen,
    PreferedCircle,
    PositionPOIRelevance,
    FlyDistance2DToEnemy,
    Count,
    None,
};

