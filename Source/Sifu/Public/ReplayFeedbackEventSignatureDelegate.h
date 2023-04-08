#pragma once
#include "CoreMinimal.h"
#include "EReplayFeedbackEvent.h"
#include "ReplayFeedbackEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayFeedbackEventSignature, EReplayFeedbackEvent, _eEvent);

