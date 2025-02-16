#pragma once
#include "CoreMinimal.h"
#include "OrderServiceActivationConditions.h"
#include "OrderServiceHasHitTargetActivationCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UOrderServiceHasHitTargetActivationCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMustBeSucessful;
    
public:
    UOrderServiceHasHitTargetActivationCondition();

};

