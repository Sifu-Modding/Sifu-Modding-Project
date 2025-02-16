#include "ReplayTimelineTransition.h"

UReplayTimelineTransition::UReplayTimelineTransition() {
    this->m_DrawOrder.AddDefaulted(2);
    this->m_bCurrentTransitionAntiAlias = true;
    this->m_fCurrentTransitionThickness = 1.00f;
}

void UReplayTimelineTransition::OnKeyHoverOrSelectStateChanged(const UReplayKeyWidget* _widget) {
}

void UReplayTimelineTransition::OnDelayedUpdateTransitionForKey(const UReplayKeyWidget* _widget) {
}




