#pragma once
#include "CoreMinimal.h"
#include "EvaluateTargetCondition.h"
#include "Templates/SubclassOf.h"
#include "TC_FromClass.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTC_FromClass : public UEvaluateTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEvaluateTargetCondition> m_Class;
    
    UTC_FromClass();
};

