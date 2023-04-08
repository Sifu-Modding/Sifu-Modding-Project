#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionConditionAILastAttackGuardType.h"
#include "ComboTransitionConditionLastAttackHit.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionConditionLastAttackHit : public UComboTransitionConditionAILastAttackGuardType {
    GENERATED_BODY()
public:
    UComboTransitionConditionLastAttackHit();
};

