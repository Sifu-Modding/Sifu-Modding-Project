#include "ComboAIConditionTraceCollision.h"

UComboAIConditionTraceCollision::UComboAIConditionTraceCollision() {
    this->m_bShouldHit = false;
    this->m_eFrom = EAIConditionTraceContext::Instigator;
    this->m_eTo = EAIConditionTraceContext::Target;
    this->m_TraceChannel = ECC_WorldStatic;
    this->m_eShape = EEnvTraceShape::Line;
    this->m_ShapeRotationRelativeTo = EAIConditionTraceRotationContext::Identity;
}

bool UComboAIConditionTraceCollision::BPF_TestEQCondition(const UAIFightingComponent* _aiComponent, const AActor* _target) const {
    return false;
}


