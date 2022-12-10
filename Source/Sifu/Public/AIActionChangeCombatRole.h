#pragma once
#include "CoreMinimal.h"
#include "ESCAICombatRoles.h"
#include "WGAiAction.h"
#include "AIActionChangeCombatRole.generated.h"

UCLASS()
class SIFU_API UAIActionChangeCombatRole : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESCAICombatRoles m_eCombatRoleToAssign;
    
    UAIActionChangeCombatRole();
};

