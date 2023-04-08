#include "AbilityTask_SlowMotionTask.h"

class UAbilityTask_SlowMotionTask;
class UCurveFloat;
class UGameplayAbility;

UAbilityTask_SlowMotionTask* UAbilityTask_SlowMotionTask::BPF_SlowMotionTask(UGameplayAbility* _owningAbility, UCurveFloat* _curve, float _fScale, float _fBlendDuration, float _fCameraSlowMotionFactor, bool _bBlockOthers, bool _bScaleInputStack, bool _bStopOnOtherSlomo, bool _bForce) {
    return NULL;
}

UAbilityTask_SlowMotionTask::UAbilityTask_SlowMotionTask() {
    this->m_Curve = NULL;
}

