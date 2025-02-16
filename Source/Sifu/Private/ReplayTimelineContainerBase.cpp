#include "ReplayTimelineContainerBase.h"

UReplayTimelineContainerBase::UReplayTimelineContainerBase() : UUserWidget(FObjectInitializer::Get()) {
}

TScriptInterface<IReplayWidgetHandler> UReplayTimelineContainerBase::BPF_GetWidgetHandler() const {
    return NULL;
}


