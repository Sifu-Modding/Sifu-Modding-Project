#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "SCAITicketEnum.h"
#include "ComboAIConditionRequestPassiveAttackTicket.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionRequestPassiveAttackTicket : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCAITicketEnum m_TicketNameEnumValue;
    
    UPROPERTY(EditAnywhere)
    bool m_bReleaseTicketInstantly;
    
    UComboAIConditionRequestPassiveAttackTicket();
};

