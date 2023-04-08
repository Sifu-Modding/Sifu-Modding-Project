#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimContainer.h"
#include "OrderPlayAnimHelper.generated.h"

class UOrderComponent;

UCLASS(Blueprintable)
class SIFU_API UOrderPlayAnimHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderPlayAnimHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GetOrderAnimContainer(UOrderComponent* _OrderComponent, uint8 _uiID, FAnimContainer& _outAnimContainer);
    
};

