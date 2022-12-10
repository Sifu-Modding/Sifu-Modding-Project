#pragma once
#include "CoreMinimal.h"
#include "ReplayTimeDilationChangeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayTimeDilationChangeDelegate, float, _fTimeDilation);

