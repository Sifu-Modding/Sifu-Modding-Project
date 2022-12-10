#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "EHitDismissReason.h"
#include "AbilityTask_HandleDefense.generated.h"

class UAbilityTask_HandleDefense;
class UGameplayAbility;

UCLASS()
class SIFU_API UAbilityTask_HandleDefense : public UAbilityTask {
    GENERATED_BODY()
public:
    UAbilityTask_HandleDefense();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_HandleDefense* BPF_HandleDefense(UGameplayAbility* _owningAbility, EHitDismissReason _eDismissReason);
    
};

