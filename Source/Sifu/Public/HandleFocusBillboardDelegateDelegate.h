#pragma once
#include "CoreMinimal.h"
#include "HandleFocusBillboardDelegateDelegate.generated.h"

class AVitalPointActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHandleFocusBillboardDelegate, AVitalPointActor*, _target);

