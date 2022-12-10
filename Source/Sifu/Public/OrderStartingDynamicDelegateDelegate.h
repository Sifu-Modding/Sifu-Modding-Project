#pragma once
#include "CoreMinimal.h"
#include "OrderStartingDynamicDelegateDelegate.generated.h"

class UOrderComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOrderStartingDynamicDelegate, uint8, _ID, UOrderComponent*, _OrderComponent);

