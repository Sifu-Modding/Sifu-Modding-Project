#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "WaitUnscaledDelegate.h"
#include "AbilityTask_WaitUnscaled.generated.h"

class UAbilityTask_WaitUnscaled;
class UGameplayAbility;

UCLASS(Blueprintable)
class SIFU_API UAbilityTask_WaitUnscaled : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitUnscaled m_OnFinish;
    
    UAbilityTask_WaitUnscaled();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitUnscaled* BPF_WaitUnscaled(UGameplayAbility* _owningAbility, float _fDuration);
    
};

