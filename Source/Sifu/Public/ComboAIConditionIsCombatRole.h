#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionIsCombatRole.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionIsCombatRole : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_eCombatRolesMask;
    
public:
    UComboAIConditionIsCombatRole();

};

