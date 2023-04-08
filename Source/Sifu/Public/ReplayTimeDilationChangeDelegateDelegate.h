#pragma once
#include "CoreMinimal.h"
#include "ReplayTimeDilationChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayTimeDilationChangeDelegate, float, _fTimeDilation);

