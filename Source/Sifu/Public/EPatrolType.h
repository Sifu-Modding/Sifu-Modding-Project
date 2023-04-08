#pragma once
#include "CoreMinimal.h"
#include "EPatrolType.generated.h"

UENUM(BlueprintType)
enum class EPatrolType : uint8 {
    Loop,
    PingPong,
    Once,
};

