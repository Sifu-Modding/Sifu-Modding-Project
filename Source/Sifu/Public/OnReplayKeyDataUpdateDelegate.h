#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyData.h"
#include "OnReplayKeyDataUpdateDelegate.generated.h"

class UReplayKey;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReplayKeyDataUpdate, UReplayKey*, _key, const FReplayKeyData&, _previousData);

