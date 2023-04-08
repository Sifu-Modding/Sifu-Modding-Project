#pragma once
#include "CoreMinimal.h"
#include "ReplayInitialStateToggleEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FReplayInitialStateToggleEventDelegate, bool, _bToggle);

