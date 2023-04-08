#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ApplyDirectionConstraintSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FVector, FApplyDirectionConstraintSignature, const FVector&, _vDirection);

