#pragma once
#include "CoreMinimal.h"
#include "EDefenseTactics.h"
#include "UObject/Object.h"
#include "AIAttackReaction.h"
#include "SCAITriggerableActionsArray.h"
#include "AIActionReaction.h"
#include "AIConditionedActionArray.h"
#include "AIMasterArchetype.generated.h"

UCLASS()
class SIFU_API UAIMasterArchetype : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<EDefenseTactics, FSCAITriggerableActionsArray> m_DefaultPostDefenseActions;
    
    UPROPERTY(EditAnywhere)
    TMap<EDefenseTactics, FAIConditionedActionArray> m_DefaultPostDefenseActionsMap;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIAttackReaction> m_ReactionAttacks;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIActionReaction> m_ReactionActions;
    
    UAIMasterArchetype();
};

