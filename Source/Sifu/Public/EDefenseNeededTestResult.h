#pragma once
#include "CoreMinimal.h"
#include "EDefenseNeededTestResult.generated.h"

UENUM(BlueprintType)
enum class EDefenseNeededTestResult : uint8 {
    Yes,
    No_Instigator_Will_Hit_First,
    No_Incoming_Hit,
    No_Target_Attack_Data,
    No_AlreadyDefended,
    No_Uknown_Reason,
};

