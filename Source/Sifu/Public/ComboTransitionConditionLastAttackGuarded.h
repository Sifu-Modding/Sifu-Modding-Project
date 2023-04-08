#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionConditionAILastAttackGuardType.h"
#include "ComboTransitionConditionLastAttackGuarded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionConditionLastAttackGuarded : public UComboTransitionConditionAILastAttackGuardType {
    GENERATED_BODY()
public:
    UComboTransitionConditionLastAttackGuarded();
};

