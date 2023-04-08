#pragma once
#include "CoreMinimal.h"
#include "ESVONPathfindingRequestResult.generated.h"

UENUM(BlueprintType)
namespace ESVONPathfindingRequestResult {
    enum Type {
        Failed,
        ReadyToPath,
        AlreadyAtGoal,
        Deferred,
        Success,
    };
}

