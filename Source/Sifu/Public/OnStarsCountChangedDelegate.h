#pragma once
#include "CoreMinimal.h"
#include "OnStarsCountChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStarsCountChanged, int32, _newCount, int32, _oldCount);

