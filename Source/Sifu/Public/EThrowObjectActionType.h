#pragma once
#include "CoreMinimal.h"
#include "EThrowObjectActionType.generated.h"

UENUM(BlueprintType)
enum class EThrowObjectActionType : uint8 {
    ObjectPickedUp,
    ObjectOnGround,
};

