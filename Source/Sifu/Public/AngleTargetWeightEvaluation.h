#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "BaseDirectionalTargetWeightEvaluation.h"
#include "AngleTargetWeightEvaluation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAngleTargetWeightEvaluation : public UBaseDirectionalTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_AngleCurve;
    
public:
    UAngleTargetWeightEvaluation();
};

