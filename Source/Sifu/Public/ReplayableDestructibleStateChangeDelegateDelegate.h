#pragma once
#include "CoreMinimal.h"
#include "EReplayableDestructibleState.h"
#include "ReplayableDestructibleStateChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayableDestructibleStateChangeDelegate, EReplayableDestructibleState, _eState);

