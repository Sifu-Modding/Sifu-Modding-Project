#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPOrderServiceInstance.h"
#include "EOrderType.h"
#include "OrderServiceInstanceHelper.generated.h"

class UOrderService;
class UOrderComponent;

UCLASS(BlueprintType)
class SIFU_API UOrderServiceInstanceHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderServiceInstanceHelper();
    UFUNCTION(BlueprintPure)
    static void BPF_GetOrderInstanceInfos(const FBPOrderServiceInstance& _orderServiceInstance, uint8& _uiOutOrder, EOrderType& _eOutType, UOrderComponent*& _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    static UOrderService* BPF_FindOrderServiceByClass(const FBPOrderServiceInstance& _myOrderServiceInstance, TSubclassOf<UOrderService> _class, FBPOrderServiceInstance& _resultOrderServiceInstance);
    
};

