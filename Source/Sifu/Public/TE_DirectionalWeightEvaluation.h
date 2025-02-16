#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "EWeightBinaryOperator.h"
#include "InputAction.h"
#include "TE_DirectionalWeightEvaluation.generated.h"

class UBaseDirectionalTargetWeightEvaluation;

UCLASS(Blueprintable)
class SIFU_API UTE_DirectionalWeightEvaluation : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBlockWhenActionIsInactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseDirectionalTargetWeightEvaluation*> m_Evaluations;
    
    UTE_DirectionalWeightEvaluation();

};

