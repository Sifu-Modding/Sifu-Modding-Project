#pragma once
#include "CoreMinimal.h"
#include "ECharacterStat.h"
#include "CharacterStatChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterStatChangedDelegate, ECharacterStat, _type, int32, _previousValue, int32, _currentValue);

