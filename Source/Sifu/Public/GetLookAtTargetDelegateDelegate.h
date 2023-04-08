#pragma once
#include "CoreMinimal.h"
#include "GetLookAtTargetDelegateDelegate.generated.h"

class AActor;
class ULookAtAnimInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(AActor*, FGetLookAtTargetDelegate, ULookAtAnimInstance*, _animInstance);

