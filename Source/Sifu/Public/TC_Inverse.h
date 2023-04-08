#pragma once
#include "CoreMinimal.h"
#include "EvaluateTargetCondition.h"
#include "TC_Inverse.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTC_Inverse : public UEvaluateTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEvaluateTargetCondition* m_condition;
    
    UTC_Inverse();
};

