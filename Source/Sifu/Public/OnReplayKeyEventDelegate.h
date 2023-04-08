#pragma once
#include "CoreMinimal.h"
#include "OnReplayKeyEventDelegate.generated.h"

class UReplayKey;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplayKeyEvent, UReplayKey*, _key);

