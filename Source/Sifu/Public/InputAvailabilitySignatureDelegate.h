#pragma once
#include "CoreMinimal.h"
#include "InputAvailabilitySignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FInputAvailabilitySignature, bool&, _bOutAvailable);

