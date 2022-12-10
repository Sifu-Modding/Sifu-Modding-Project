#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnAbilitySystemComponentTagsChangedDelegate.generated.h"

class USCAbilitySystemComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAbilitySystemComponentTagsChanged, USCAbilitySystemComponent*, _abilityComponent, const FGameplayTag&, _tag, int32, _iCount);

