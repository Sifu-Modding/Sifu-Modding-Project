#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SlowMotionTaskDelegateDelegate.h"
#include "AbilityTask_SlowMotionTask.generated.h"

class UCurveFloat;
class UGameplayAbility;
class UAbilityTask_SlowMotionTask;

UCLASS()
class SIFU_API UAbilityTask_SlowMotionTask : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveFloat* m_Curve;
    
    UPROPERTY(BlueprintAssignable)
    FSlowMotionTaskDelegate m_OnFinish;
    
    UPROPERTY(BlueprintAssignable)
    FSlowMotionTaskDelegate m_OnStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSlowMotionTaskDelegate m_OnPaused;
    
    UAbilityTask_SlowMotionTask();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_SlowMotionTask* BPF_SlowMotionTask(UGameplayAbility* _owningAbility, UCurveFloat* _curve, float _fScale, float _fBlendDuration, float _fCameraSlowMotionFactor, bool _bBlockOthers, bool _bScaleInputStack, bool _bStopOnOtherSlomo, bool _bForce);
    
};

