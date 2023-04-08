#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIActionReaction.h"
#include "AIAttackReaction.h"
#include "AIConditionedActionArray.h"
#include "EDefenseTactics.h"
#include "SCAITriggerableActionsArray.h"
#include "AIMasterArchetype.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIMasterArchetype : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDefenseTactics, FSCAITriggerableActionsArray> m_DefaultPostDefenseActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDefenseTactics, FAIConditionedActionArray> m_DefaultPostDefenseActionsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIAttackReaction> m_ReactionAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIActionReaction> m_ReactionActions;
    
    UAIMasterArchetype();
};

