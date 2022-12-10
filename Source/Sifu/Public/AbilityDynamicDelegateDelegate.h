#pragma once
#include "CoreMinimal.h"
#include "AbilityDynamicDelegateDelegate.generated.h"

class UGameplayAbility;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FAbilityDynamicDelegate, UGameplayAbility*, _ability);

