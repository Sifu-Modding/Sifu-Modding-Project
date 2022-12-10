#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnAbilitySystemComponentTagsChangedDelegateDelegate.generated.h"

class USCAbilitySystemComponent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnAbilitySystemComponentTagsChangedDelegate, USCAbilitySystemComponent*, _abilityComponent, const FGameplayTag&, _tag, int32, _iCount);

