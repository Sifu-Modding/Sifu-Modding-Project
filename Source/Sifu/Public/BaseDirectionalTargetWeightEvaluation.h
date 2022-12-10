#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseDirectionalTargetWeightEvaluation.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UBaseDirectionalTargetWeightEvaluation : public UObject {
    GENERATED_BODY()
public:
    UBaseDirectionalTargetWeightEvaluation();
};

