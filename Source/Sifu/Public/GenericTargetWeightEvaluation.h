#pragma once
#include "CoreMinimal.h"
#include "BaseTargetWeightEvaluation.h"
#include "EWeightBinaryOperator.h"
#include "GenericTargetWeightEvaluation.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGenericTargetWeightEvaluation : public UBaseTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UBaseTargetWeightEvaluation*> m_Evaluations;
    
public:
    UGenericTargetWeightEvaluation();
};

