#pragma once
#include "CoreMinimal.h"
#include "OnRepBrokenStateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRepBrokenState, bool, bBroken);

