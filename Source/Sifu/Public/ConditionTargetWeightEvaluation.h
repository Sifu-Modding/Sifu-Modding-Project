#pragma once
#include "CoreMinimal.h"
#include "BaseTargetWeightEvaluation.h"
#include "ConditionOnTargetWeightEvaluation.h"
#include "EWeightBinaryOperator.h"
#include "ConditionTargetWeightEvaluation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UConditionTargetWeightEvaluation : public UBaseTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightBinaryOperator m_eOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionOnTargetWeightEvaluation> m_BonusPerCondition;
    
public:
    UConditionTargetWeightEvaluation();

private:
    UFUNCTION(BlueprintCallable)
    static FString GetEditorDesc(const FConditionOnTargetWeightEvaluation& _eval);
    
};

