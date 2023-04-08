#pragma once
#include "CoreMinimal.h"
#include "EUpdateTargetCondition.generated.h"

UENUM(BlueprintType)
enum class EUpdateTargetCondition : uint8 {
    Alway,
    WhenTargetConditionFail,
};

