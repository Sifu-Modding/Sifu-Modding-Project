#pragma once
#include "CoreMinimal.h"
#include "ESCAICombatRoles.h"
#include "WGAiAction.h"
#include "AIActionChangeCombatRole.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIActionChangeCombatRole : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCAICombatRoles m_eCombatRoleToAssign;
    
    UAIActionChangeCombatRole();
};

