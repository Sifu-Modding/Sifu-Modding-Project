#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "HitDescription.h"
#include "HitActionLauncherContext.generated.h"

USTRUCT(BlueprintType)
struct FHitActionLauncherContext : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitDescription m_hitDescription;
    
    SIFU_API FHitActionLauncherContext();
};

