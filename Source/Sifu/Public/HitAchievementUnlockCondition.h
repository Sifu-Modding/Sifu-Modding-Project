#pragma once
#include "CoreMinimal.h"
#include "HitDescription.h"
#include "WGAchievementUnlockCondition.h"
#include "HitAchievementUnlockCondition.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UHitAchievementUnlockCondition : public UWGAchievementUnlockCondition {
    GENERATED_BODY()
public:
    UHitAchievementUnlockCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMCHit(AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAIHit(AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    
};

