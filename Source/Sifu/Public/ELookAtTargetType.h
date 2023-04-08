#pragma once
#include "CoreMinimal.h"
#include "ELookAtTargetType.generated.h"

UENUM(BlueprintType)
enum class ELookAtTargetType : uint8 {
    Dialog,
    Attack,
    Throwable,
    Interaction,
    FirstLocalPlayer,
    Count,
    None,
};

