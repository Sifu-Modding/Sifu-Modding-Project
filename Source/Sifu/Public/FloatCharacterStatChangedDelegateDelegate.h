#pragma once
#include "CoreMinimal.h"
#include "ECharacterStat.h"
#include "FloatCharacterStatChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFloatCharacterStatChangedDelegate, ECharacterStat, _type, float, _previousValue, float, _currentValue);

