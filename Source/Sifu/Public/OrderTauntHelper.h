#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OrderTauntHelper.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API UOrderTauntHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderTauntHelper();

    UFUNCTION(BlueprintCallable)
    static void BP_TriggerTauntEffects(AActor* _Instigator);
    
};

