#pragma once
#include "CoreMinimal.h"
#include "VideoRecordEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVideoRecordEvent, bool, bSuccess);

