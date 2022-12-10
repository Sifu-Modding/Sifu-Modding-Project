#pragma once
#include "CoreMinimal.h"
#include "ReplayGameplayCameraRecordEvent.h"
#include "ReplayGameplayCameraRecordEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FReplayGameplayCameraRecordEventDelegate, const FReplayGameplayCameraRecordEvent&, _serializedEvent);

