#pragma once
#include "CoreMinimal.h"
#include "AiActionResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAiActionResultDelegate, bool, _bSucceeded, const FString&, _message);

