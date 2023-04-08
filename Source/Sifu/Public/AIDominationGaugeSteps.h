#pragma once
#include "CoreMinimal.h"
#include "AIDominationGaugeSteps.generated.h"

USTRUCT(BlueprintType)
struct FAIDominationGaugeSteps {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Steps[4];
    
    SIFU_API FAIDominationGaugeSteps();
};

