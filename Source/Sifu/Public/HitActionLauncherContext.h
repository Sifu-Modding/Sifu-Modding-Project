#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "HitDescription.h"
#include "HitActionLauncherContext.generated.h"

USTRUCT(BlueprintType)
struct FHitActionLauncherContext : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitDescription m_hitDescription;
    
    SIFU_API FHitActionLauncherContext();
};

