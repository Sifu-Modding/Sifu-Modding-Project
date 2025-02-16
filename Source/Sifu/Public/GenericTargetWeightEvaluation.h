#pragma once
#include "CoreMinimal.h"
#include "BaseTargetWeightEvaluation.h"
#include "EWeightBinaryOperator.h"
#include "GenericTargetWeightEvaluation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UGenericTargetWeightEvaluation : public UBaseTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseTargetWeightEvaluation*> m_Evaluations;
    
public:
    UGenericTargetWeightEvaluation();

};

