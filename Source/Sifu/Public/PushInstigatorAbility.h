#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "SCGameplayAbilityActivationInfo.h"
#include "PushInstigatorAbility.generated.h"

class UPushConfiguration;

UCLASS(Blueprintable)
class UPushInstigatorAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushConfiguration* m_PushConfiguration;
    
public:
    UPushInstigatorAbility();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_HandleDefaultPush(const FSCGameplayAbilityActivationInfo& _activationInfo);
    
};

