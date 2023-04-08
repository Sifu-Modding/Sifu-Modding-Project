#pragma once
#include "CoreMinimal.h"
#include "IsSubMenuAvailableDelegateDelegate.generated.h"

class UReplaySubMenuWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FIsSubMenuAvailableDelegate, const UReplaySubMenuWidget*, _menu);

