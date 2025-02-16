#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "SCAITicketEnum.h"
#include "ComboAIConditionRequestPassiveAttackTicket.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionRequestPassiveAttackTicket : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCAITicketEnum m_TicketNameEnumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReleaseTicketInstantly;
    
    UComboAIConditionRequestPassiveAttackTicket();

};

