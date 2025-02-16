#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionCondition.h"
#include "EFightingActionState.h"
#include "ComboTransitionConditionActionState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionConditionActionState : public UComboTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingActionState m_ActionState;
    
    UComboTransitionConditionActionState();

};

