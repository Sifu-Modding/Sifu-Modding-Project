#pragma once
#include "CoreMinimal.h"
#include "ESCAICombatRoles.h"
#include "ESCAICombatRolesChangeReason.h"
#include "OnCombatRoleChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCombatRoleChangedDynamic, ESCAICombatRoles, NewCombatRole, ESCAICombatRolesChangeReason, ChangeReason);

