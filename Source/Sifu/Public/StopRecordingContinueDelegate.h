#pragma once
#include "CoreMinimal.h"
#include "StopRecordingContinueDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FStopRecordingContinue, bool, _bContinue);

