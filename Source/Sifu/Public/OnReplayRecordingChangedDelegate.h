#pragma once
#include "CoreMinimal.h"
#include "OnReplayRecordingChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplayRecordingChanged, bool, _bRecording);

