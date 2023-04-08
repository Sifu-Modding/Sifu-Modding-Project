#pragma once
#include "CoreMinimal.h"
#include "ESCAICombatRoles.h"
#include "SCAITriggerableActions.h"
#include "AIChangeRoleTriggerableActions.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIChangeRoleTriggerableActions : public USCAITriggerableActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCAICombatRoles m_eCombatRoleToAssign;
    
    UAIChangeRoleTriggerableActions();
};

