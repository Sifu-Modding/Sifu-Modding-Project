#include "ReplayTimelineTransition.h"

class UReplayKeyWidget;

void UReplayTimelineTransition::OnKeyHoverOrSelectStateChanged(const UReplayKeyWidget* _widget) {
}

void UReplayTimelineTransition::OnDelayedUpdateTransitionForKey(const UReplayKeyWidget* _widget) {
}



UReplayTimelineTransition::UReplayTimelineTransition() {
    this->m_DrawOrder.AddDefaulted(2);
    this->m_bCurrentTransitionAntiAlias = true;
    this->m_fCurrentTransitionThickness = 1.00f;
}

