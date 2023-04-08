#pragma once
#include "CoreMinimal.h"
#include "EDropNotifyApplyMode.generated.h"

UENUM(BlueprintType)
enum class EDropNotifyApplyMode : uint8 {
    OnSelf,
    OnCurrentTarget,
};

