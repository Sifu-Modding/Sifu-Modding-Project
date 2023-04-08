#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetConditionInstance.h"
#include "HitBoxCondition.h"
#include "HitBoxGenericCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UHitBoxGenericCondition : public UHitBoxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_condition;
    
    UHitBoxGenericCondition();
};

