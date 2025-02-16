#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "BaseActorTargetConditionInstance.h"
#include "ActorTargetCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UActorTargetCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_OptionalSubConditionOnTarget;
    
    UActorTargetCondition();

};

