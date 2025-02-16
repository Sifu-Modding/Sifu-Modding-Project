#pragma once
#include "CoreMinimal.h"
#include "ESCMathCondition.h"
#include "EvaluateTargetCondition.h"
#include "TC_Distance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTC_Distance : public UEvaluateTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCMathCondition m_eCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDistance;
    
    UTC_Distance();

};

