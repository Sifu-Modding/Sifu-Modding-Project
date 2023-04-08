#include "AsyncTaskAiAction.h"
#include "Templates/SubclassOf.h"

class UAIFightingComponent;
class UAsyncTaskAiAction;
class USCAiAction;

UAsyncTaskAiAction* UAsyncTaskAiAction::BPF_ScheduleAIAction(UAIFightingComponent* _aiComponent, TSubclassOf<USCAiAction> _actionClass, USCAiAction* _action, USCAiAction*& _scheduledAction, bool _bCancelPendingActions) {
    return NULL;
}

UAsyncTaskAiAction::UAsyncTaskAiAction() {
}

