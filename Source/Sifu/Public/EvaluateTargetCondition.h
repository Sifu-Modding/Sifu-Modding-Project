#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EvaluateTargetCondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UEvaluateTargetCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInverseCondition;
    
    UEvaluateTargetCondition();

};

