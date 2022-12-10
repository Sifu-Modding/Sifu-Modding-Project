#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EvaluateTargetCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UEvaluateTargetCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bInverseCondition;
    
    UEvaluateTargetCondition();
};

