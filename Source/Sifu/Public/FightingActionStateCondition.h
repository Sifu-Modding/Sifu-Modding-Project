#pragma once
#include "CoreMinimal.h"
#include "EFightingActionState.h"
#include "BaseActorCondition.h"
#include "FightingActionStateCondition.generated.h"

UCLASS()
class SIFU_API UFightingActionStateCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFightingActionState m_eActionState;
    
    UFightingActionStateCondition();
};

