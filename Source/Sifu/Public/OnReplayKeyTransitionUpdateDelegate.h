#pragma once
#include "CoreMinimal.h"
#include "OnReplayKeyTransitionUpdateDelegate.generated.h"

class UReplayKey;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReplayKeyTransitionUpdate, UReplayKey*, _key, bool, _bIsOnTransition);

