#pragma once
#include "CoreMinimal.h"
#include "SCGameplayEffect.h"
#include "ECharacterStat.h"
#include "SkillGameplayEffect.generated.h"

UCLASS(Blueprintable)
class SIFU_API USkillGameplayEffect : public USCGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSkillPointCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_ConsolidationSkillPointCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterStat m_eStatUsedToUnlockSkill;
    
    USkillGameplayEffect();

};

