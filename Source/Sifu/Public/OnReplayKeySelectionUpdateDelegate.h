#pragma once
#include "CoreMinimal.h"
#include "OnReplayKeySelectionUpdateDelegate.generated.h"

class UReplayKey;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReplayKeySelectionUpdate, UReplayKey*, _key, bool, _bIsSelected);

