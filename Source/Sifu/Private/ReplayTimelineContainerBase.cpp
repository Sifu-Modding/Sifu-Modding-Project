#include "ReplayTimelineContainerBase.h"

class IReplayWidgetHandler;
class UReplayWidgetHandler;

TScriptInterface<IReplayWidgetHandler> UReplayTimelineContainerBase::BPF_GetWidgetHandler() const {
    return NULL;
}

UReplayTimelineContainerBase::UReplayTimelineContainerBase() : UUserWidget(FObjectInitializer::Get()) {
}

