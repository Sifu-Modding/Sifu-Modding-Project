#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "EWeightBinaryOperator.h"
#include "TE_WeightEvaluation.generated.h"

class UBaseTargetWeightEvaluation;

UCLASS(Blueprintable)
class SIFU_API UTE_WeightEvaluation : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseTargetWeightEvaluation*> m_Evaluations;
    
    UTE_WeightEvaluation();

};

