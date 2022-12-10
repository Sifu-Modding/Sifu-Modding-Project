#pragma once
#include "CoreMinimal.h"
#include "GetLookAtTargetDelegateDelegate.generated.h"

class ULookAtAnimInstance;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(AActor*, FGetLookAtTargetDelegate, ULookAtAnimInstance*, _animInstance);

