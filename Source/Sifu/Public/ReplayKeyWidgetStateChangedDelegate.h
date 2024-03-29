#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyWidgetStateChangedDelegate.generated.h"

class UReplayKeyWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayKeyWidgetStateChanged, const UReplayKeyWidget*, _widget);

