#pragma once
#include "CoreMinimal.h"
#include "OnReplayKeyTimeUpdateDelegate.generated.h"

class UReplayKey;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReplayKeyTimeUpdate, UReplayKey*, _key, float, _fTime);

