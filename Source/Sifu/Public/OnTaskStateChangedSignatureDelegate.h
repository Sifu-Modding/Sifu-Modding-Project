#pragma once
#include "CoreMinimal.h"
#include "OnTaskStateChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTaskStateChangedSignature, bool, _bIsTaskRunning, const FString&, _taskName);

