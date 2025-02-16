#pragma once
#include "CoreMinimal.h"
#include "OrderServiceActivationConditions.h"
#include "OrderServiceRagingBullPhaseActivationCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UOrderServiceRagingBullPhaseActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiAllowedPhases;
    
public:
    UOrderServiceRagingBullPhaseActivationCondition();

};

