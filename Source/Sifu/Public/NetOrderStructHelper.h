#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NetOrderStruct.h"
#include "NetOrderStructHelper.generated.h"

class UOrderComponent;

UCLASS(BlueprintType)
class SIFU_API UNetOrderStructHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNetOrderStructHelper();
    UFUNCTION(BlueprintCallable)
    static bool GetBaseNetOrderStruct(UOrderComponent* _OrderComponent, uint8 _uiOrderId, bool _bCheck, FNetOrderStruct& _outNetOrderStruct);
    
};

