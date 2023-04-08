#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "SCGameplayAbility.h"
#include "ParryFromDownAbility.generated.h"

UCLASS(Blueprintable)
class SIFU_API UParryFromDownAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLaunchDownRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_animRecoveryOverriden;
    
public:
    UParryFromDownAbility();
};

