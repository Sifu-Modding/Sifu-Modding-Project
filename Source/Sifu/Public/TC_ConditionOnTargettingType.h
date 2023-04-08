#pragma once
#include "CoreMinimal.h"
#include "ETargetingPrio.h"
#include "EvaluateTargetCondition.h"
#include "TC_ConditionOnTargettingType.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTC_ConditionOnTargettingType : public UEvaluateTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetingPrio m_eTargettingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEvaluateTargetCondition* m_condition;
    
    UTC_ConditionOnTargettingType();
};

