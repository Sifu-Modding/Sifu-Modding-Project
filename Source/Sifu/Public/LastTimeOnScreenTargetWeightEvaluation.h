#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "BaseTargetWeightEvaluation.h"
#include "LastTimeOnScreenTargetWeightEvaluation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API ULastTimeOnScreenTargetWeightEvaluation : public UBaseTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_TimeCurve;
    
public:
    ULastTimeOnScreenTargetWeightEvaluation();
};

