#pragma once
#include "CoreMinimal.h"
#include "ReplayVideoRecorderCreatedDelegateDelegate.generated.h"

class AReplayVideoRecorder;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FReplayVideoRecorderCreatedDelegate, AReplayVideoRecorder*, _videoRecorder);

