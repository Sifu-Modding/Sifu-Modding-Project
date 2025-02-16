#include "WidgetPoolComponent.h"

UWidgetPoolComponent::UWidgetPoolComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UWidgetPoolComponent::BPF_ReleaseWidget(const FSCUserDefinedEnumHandler& _userEnum, USCUserWidget* _userWidget) {
}

USCUserWidget* UWidgetPoolComponent::BPF_GetWidget(const FSCUserDefinedEnumHandler& _userEnum) {
    return NULL;
}


