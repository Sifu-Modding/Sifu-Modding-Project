#pragma once
#include "CoreMinimal.h"
#include "EReplayableDestructibleState.h"
#include "ReplayableDestructibleStateChangeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayableDestructibleStateChangeDelegate, EReplayableDestructibleState, _eState);

