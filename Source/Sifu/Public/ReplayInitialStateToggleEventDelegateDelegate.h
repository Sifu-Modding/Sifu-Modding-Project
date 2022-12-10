#pragma once
#include "CoreMinimal.h"
#include "ReplayInitialStateToggleEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FReplayInitialStateToggleEventDelegate, bool, _bToggle);

