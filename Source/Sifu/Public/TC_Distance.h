#pragma once
#include "CoreMinimal.h"
#include "EvaluateTargetCondition.h"
#include "ESCMathCondition.h"
#include "TC_Distance.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTC_Distance : public UEvaluateTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESCMathCondition m_eCondition;
    
    UPROPERTY(EditAnywhere)
    float m_fDistance;
    
    UTC_Distance();
};

