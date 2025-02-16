#include "BindablePropertyUserWidget.h"

UBindablePropertyUserWidget::UBindablePropertyUserWidget() {
    this->m_bSelfBindingProperty = false;
    this->m_bConstructProperty = false;
    this->m_PropertyClass = NULL;
    this->m_Property = NULL;
}

void UBindablePropertyUserWidget::OnPropertyUpdated(UBindablePropertyBase* _property) {
}

void UBindablePropertyUserWidget::BPF_RefreshDisplay() {
}

void UBindablePropertyUserWidget::BPF_OnInputUpdate() {
}

void UBindablePropertyUserWidget::BPF_CreateProperty() {
}



