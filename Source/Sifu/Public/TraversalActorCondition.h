#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "ETraversalPhase.h"
#include "TraversalActorCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UTraversalActorCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraversalPhase m_ePhase;
    
    UTraversalActorCondition();

};

