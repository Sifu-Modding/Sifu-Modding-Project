#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseTargetWeightEvaluation.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UBaseTargetWeightEvaluation : public UObject {
    GENERATED_BODY()
public:
    UBaseTargetWeightEvaluation();
};

