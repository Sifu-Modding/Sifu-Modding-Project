#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "AttackAbility.generated.h"

UCLASS(Blueprintable)
class UAttackAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCameraForwardWhenNoTarget;
    
public:
    UAttackAbility();
};

