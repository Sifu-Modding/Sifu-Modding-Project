#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "BehaviorTargetCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UBehaviorTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiBehaviorMask;
    
    UBehaviorTargetCondition();

};

