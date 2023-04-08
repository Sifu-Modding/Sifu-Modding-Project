#pragma once
#include "CoreMinimal.h"
#include "SCAITicketEnum.h"
#include "SCAITriggerableActions.h"
#include "AILaunchAttackTriggerableAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAILaunchAttackTriggerableAction : public USCAITriggerableActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCAITicketEnum m_ComboStartNodeEnumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckCanAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTestTicketAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetTicketCooldown;
    
    UAILaunchAttackTriggerableAction();
};

