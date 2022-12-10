#pragma once
#include "CoreMinimal.h"
#include "BPOrderServiceInstance.h"
#include "OrderService.h"
#include "BlueprintOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UBlueprintOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UBlueprintOrderService();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnTick(const FBPOrderServiceInstance& _instance, float _fDelta) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnStop(const FBPOrderServiceInstance& _instance, bool _bInterrupted) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnStart(const FBPOrderServiceInstance& _instance) const;
    
};

