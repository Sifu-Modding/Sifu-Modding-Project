#pragma once
#include "CoreMinimal.h"
#include "AIActionAttack.h"
#include "AIActionTriggerProxy.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API UAIActionTriggerProxy : public UAIActionAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTriggerProxyDirectlyAtStart;
    
    UAIActionTriggerProxy();

    UFUNCTION(BlueprintCallable)
    void BPF_TriggerProxy();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetProxyActorToTrigger(AActor* _proxyActor);
    
};

