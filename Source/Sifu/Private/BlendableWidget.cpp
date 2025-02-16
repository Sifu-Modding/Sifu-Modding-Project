#include "BlendableWidget.h"

UBlendableWidget::UBlendableWidget() {
    this->m_fBlendDuration = 0.00f;
    this->m_eBlendValueType = ESCType::Float;
}

void UBlendableWidget::BPF_StartTimerBlend(bool _bReverse) {
}

float UBlendableWidget::BPF_GetBlendedFloat() const {
    return 0.0f;
}

FLinearColor UBlendableWidget::BPF_GetBlendedColor() const {
    return FLinearColor{};
}

int32 UBlendableWidget::BPF_BindMaterialParameterToBlendAlpha(UMaterialParameterCollection* _collection, FName _parameterName) {
    return 0;
}


