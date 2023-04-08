#pragma once
#include "CoreMinimal.h"
#include "AIConditionClassInstance.h"
#include "AICancelCondition.generated.h"

USTRUCT(BlueprintType)
struct FAICancelCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTestFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIConditionClassInstance m_condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvert;
    
    SIFU_API FAICancelCondition();
};

