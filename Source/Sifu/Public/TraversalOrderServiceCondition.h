#pragma once
#include "CoreMinimal.h"
#include "ETraversalPhase.h"
#include "OrderServiceActivationConditions.h"
#include "TraversalOrderServiceCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTraversalOrderServiceCondition : public UOrderServiceActivationConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraversalPhase m_ePhase;
    
    UTraversalOrderServiceCondition();
};

