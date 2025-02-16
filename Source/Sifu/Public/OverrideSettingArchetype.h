#pragma once
#include "CoreMinimal.h"
#include "AIAttackReaction.h"
#include "OverrideSettingArchetype.generated.h"

class UCombo;

USTRUCT(BlueprintType)
struct FOverrideSettingArchetype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCombo> m_Combo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIAttackReaction> m_AttackReactionList;
    
    SIFU_API FOverrideSettingArchetype();
};

