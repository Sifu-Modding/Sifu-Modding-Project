#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetConditionInstance.h"
#include "EOrderServiceConditionUpdateFrequency.h"
#include "EOrderServiceDeactivationMethod.h"
#include "OrderServiceActivationConditions.h"
#include "GenericActivationCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UGenericActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderServiceConditionUpdateFrequency m_eUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderServiceDeactivationMethod m_eDeactivationMethd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_GenericCondition;
    
    UGenericActivationCondition();

};

