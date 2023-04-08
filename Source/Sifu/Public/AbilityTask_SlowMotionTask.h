#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SlowMotionTaskDelegateDelegate.h"
#include "AbilityTask_SlowMotionTask.generated.h"

class UAbilityTask_SlowMotionTask;
class UCurveFloat;
class UGameplayAbility;

UCLASS(Blueprintable)
class SIFU_API UAbilityTask_SlowMotionTask : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Curve;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlowMotionTaskDelegate m_OnFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlowMotionTaskDelegate m_OnStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlowMotionTaskDelegate m_OnPaused;
    
    UAbilityTask_SlowMotionTask();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_SlowMotionTask* BPF_SlowMotionTask(UGameplayAbility* _owningAbility, UCurveFloat* _curve, float _fScale, float _fBlendDuration, float _fCameraSlowMotionFactor, bool _bBlockOthers, bool _bScaleInputStack, bool _bStopOnOtherSlomo, bool _bForce);
    
};

