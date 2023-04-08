#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HitActionLauncher.h"
#include "AbilityHitActionLauncher.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAbilityHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_InstigatorEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_VictimEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bApplyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNotifyHitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bApplyFreezeFrame;
    
    UAbilityHitActionLauncher();
};

