#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "CurrentAttackTargetCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UCurrentAttackTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxElapsedTimeSinceLastUpdate;
    
    UCurrentAttackTargetCondition();

};

