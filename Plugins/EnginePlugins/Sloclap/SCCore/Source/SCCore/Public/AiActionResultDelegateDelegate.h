#pragma once
#include "CoreMinimal.h"
#include "AiActionResultDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAiActionResultDelegate, bool, _bSucceeded, const FString&, _message);

