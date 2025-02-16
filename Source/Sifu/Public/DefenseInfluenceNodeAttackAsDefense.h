#pragma once
#include "CoreMinimal.h"
#include "ContextualDefenseInfluenceNode.h"
#include "SCAITicketEnum.h"
#include "DefenseInfluenceNodeAttackAsDefense.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDefenseInfluenceNodeAttackAsDefense : public UContextualDefenseInfluenceNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforeTagetAttackHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ComboTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCAITicketEnum m_AttackTicket;
    
public:
    UDefenseInfluenceNodeAttackAsDefense();

};

