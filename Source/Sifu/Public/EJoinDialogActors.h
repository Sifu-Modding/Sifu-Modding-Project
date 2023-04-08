#pragma once
#include "CoreMinimal.h"
#include "EJoinDialogActors.generated.h"

UENUM(BlueprintType)
enum class EJoinDialogActors : uint8 {
    All,
    PrimarySpeaker,
    SecondarySpeaker,
    DialogInvolvedActors,
    None,
};

