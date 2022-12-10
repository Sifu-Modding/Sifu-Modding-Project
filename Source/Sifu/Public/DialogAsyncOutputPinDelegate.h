#pragma once
#include "CoreMinimal.h"
#include "DialogAsyncOutputPinDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogAsyncOutputPin, int32, DialogNodeId);

