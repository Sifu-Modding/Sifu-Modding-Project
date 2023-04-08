#pragma once
#include "CoreMinimal.h"
#include "BaseTargetEvaluation.h"
#include "TE_CurrentAttacked.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UTE_CurrentAttacked : public UBaseTargetEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAutoSelectTargetCooldown;
    
    UTE_CurrentAttacked();
};

