#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyIndexUpdateReason.h"
#include "OnReplayKeyIndexUpdateDelegate.generated.h"

class UReplayKey;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnReplayKeyIndexUpdate, UReplayKey*, _key, int32, _previousIndex, EReplayKeyIndexUpdateReason, _eReason);

