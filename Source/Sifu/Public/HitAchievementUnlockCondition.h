#pragma once
#include "CoreMinimal.h"
#include "WGAchievementUnlockCondition.h"
#include "HitDescription.h"
#include "HitAchievementUnlockCondition.generated.h"

class AFightingCharacter;

UCLASS()
class SIFU_API UHitAchievementUnlockCondition : public UWGAchievementUnlockCondition {
    GENERATED_BODY()
public:
    UHitAchievementUnlockCondition();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMCHit(AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAIHit(AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    
};

