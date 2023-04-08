#pragma once
#include "CoreMinimal.h"
#include "AIConditionClassInstance.h"
#include "SCAITicketEnum.h"
#include "AIAttackReaction.generated.h"

class UComboTransitionCondition;

USTRUCT(BlueprintType)
struct FAIAttackReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UComboTransitionCondition*> m_Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIConditionClassInstance> m_ConditionsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanInterruptMoveToAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanInterruptAttackWhenAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanEndComboAfterOnGoingAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanInterruptPassiveTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCAITicketEnum m_TicketNameEnumValue;
    
    SIFU_API FAIAttackReaction();
};

