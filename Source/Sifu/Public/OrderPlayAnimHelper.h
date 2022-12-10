#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OrderPlayAnimHelper.generated.h"

class UOrderComponent;

UCLASS(BlueprintType)
class SIFU_API UOrderPlayAnimHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderPlayAnimHelper();
    UFUNCTION(BlueprintPure)
    static void BPF_GetOrderAnimContainer(UOrderComponent* _OrderComponent, uint8 _uiID, FAnimContainer& _outAnimContainer);
    
};

