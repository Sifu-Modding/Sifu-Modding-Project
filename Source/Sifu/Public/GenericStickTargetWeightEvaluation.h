#pragma once
#include "CoreMinimal.h"
#include "BaseDirectionalTargetWeightEvaluation.h"
#include "EWeightBinaryOperator.h"
#include "GenericStickTargetWeightEvaluation.generated.h"

class UBaseTargetWeightEvaluation;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UGenericStickTargetWeightEvaluation : public UBaseDirectionalTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseTargetWeightEvaluation*> m_Evaluations;
    
public:
    UGenericStickTargetWeightEvaluation();
};

