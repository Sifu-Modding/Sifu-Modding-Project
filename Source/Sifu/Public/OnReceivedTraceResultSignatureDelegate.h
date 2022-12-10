#pragma once
#include "CoreMinimal.h"
#include "OnReceivedTraceResultSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReceivedTraceResultSignature, bool, _bHasHit, float, _fDistance);

