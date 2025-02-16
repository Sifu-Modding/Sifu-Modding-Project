#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionIsTargetCarryingWeapon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionIsTargetCarryingWeapon : public UAIComboCondition {
    GENERATED_BODY()
public:
    UComboAIConditionIsTargetCarryingWeapon();

};

