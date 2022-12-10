#include "ReplayTimelineContainerBase.h"

class UReplayWidgetHandler;
class IReplayWidgetHandler;

TScriptInterface<IReplayWidgetHandler> UReplayTimelineContainerBase::BPF_GetWidgetHandler() const {
    return NULL;
}

UReplayTimelineContainerBase::UReplayTimelineContainerBase() : UUserWidget(FObjectInitializer::Get()) {
}

