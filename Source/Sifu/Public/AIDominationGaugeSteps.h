#pragma once
#include "CoreMinimal.h"
#include "AIDominationGaugeSteps.generated.h"

USTRUCT(BlueprintType)
struct FAIDominationGaugeSteps {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float m_Steps[4];
    
    SIFU_API FAIDominationGaugeSteps();
};

