#include "MessageFeedbackUserWidget.h"

UMessageFeedbackUserWidget::UMessageFeedbackUserWidget() {
    this->m_Controller = NULL;
    this->m_eShowForReason = EMessageReason::None;
}

bool UMessageFeedbackUserWidget::BPF_IsActive() const {
    return false;
}



