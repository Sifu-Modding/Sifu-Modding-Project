#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionHasAttackTicket.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionHasAttackTicket : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvert;
    
    UComboAIConditionHasAttackTicket();
};

