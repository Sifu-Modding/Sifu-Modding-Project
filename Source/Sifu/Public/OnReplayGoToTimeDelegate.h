#pragma once
#include "CoreMinimal.h"
#include "OnReplayGoToTimeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplayGoToTime, bool, _bUnselectKey);

