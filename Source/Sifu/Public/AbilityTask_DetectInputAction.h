#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "DetectInputActionDelegateDelegate.h"
#include "InputAction.h"
#include "InputContext.h"
#include "AbilityTask_DetectInputAction.generated.h"

class UAbilityTask_DetectInputAction;
class UGameplayAbility;

UCLASS(Blueprintable)
class SIFU_API UAbilityTask_DetectInputAction : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectInputActionDelegate m_OnInputActionDetected;
    
    UAbilityTask_DetectInputAction();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DetectInputAction* BPF_DetectInputAction(UGameplayAbility* _owningAbility, InputAction _eAction, bool _bDetectDeactivation, bool _bEndTaskOnDetected, InputContext _eInputContext);
    
};

