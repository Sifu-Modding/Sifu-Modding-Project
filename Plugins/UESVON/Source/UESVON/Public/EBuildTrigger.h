#pragma once
#include "CoreMinimal.h"
#include "EBuildTrigger.generated.h"

UENUM(BlueprintType)
enum class EBuildTrigger : uint8 {
    OnEdit,
    Manual,
};

