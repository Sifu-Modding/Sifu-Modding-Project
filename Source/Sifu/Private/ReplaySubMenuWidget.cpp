#include "ReplaySubMenuWidget.h"

class UReplaySubMenuWidget;

bool UReplaySubMenuWidget::BPF_IsSubMenuAvailable(const UReplaySubMenuWidget* _menu) const {
    return false;
}

void UReplaySubMenuWidget::BPF_BindIsSubMenuAvailableDelegate(const FIsSubMenuAvailableDelegate& _delegate) {
}






UReplaySubMenuWidget::UReplaySubMenuWidget() {
    this->m_CustomWidgetNavigationClass = NULL;
    this->m_CustomWidgetNavigation = NULL;
    this->m_ParentSubMenu = NULL;
}

