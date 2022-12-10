#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPOrderServiceInstance.h"
#include "OrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UOrderService : public UObject {
    GENERATED_BODY()
public:
    UOrderService();
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnInit(const FBPOrderServiceInstance& _instance);
    
};

