#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "WaitUnscaledDelegate.h"
#include "AbilityTask_WaitUnscaled.generated.h"

class UGameplayAbility;
class UAbilityTask_WaitUnscaled;

UCLASS()
class SIFU_API UAbilityTask_WaitUnscaled : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitUnscaled m_OnFinish;
    
    UAbilityTask_WaitUnscaled();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitUnscaled* BPF_WaitUnscaled(UGameplayAbility* _owningAbility, float _fDuration);
    
};

