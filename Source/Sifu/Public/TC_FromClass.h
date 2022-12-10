#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EvaluateTargetCondition.h"
#include "TC_FromClass.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTC_FromClass : public UEvaluateTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEvaluateTargetCondition> m_Class;
    
    UTC_FromClass();
};

