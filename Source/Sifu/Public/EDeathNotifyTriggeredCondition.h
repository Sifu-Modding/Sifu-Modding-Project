#pragma once
#include "CoreMinimal.h"
#include "EDeathNotifyTriggeredCondition.generated.h"

UENUM(BlueprintType)
enum class EDeathNotifyTriggeredCondition : uint8 {
    IfGoesToRagdoll,
    IfAnimOrNoUnspawn,
};

