#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EFightingState.h"
#include "FightingStateCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFightingStateCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingState m_eFightingState;
    
    UFightingStateCondition();
};

