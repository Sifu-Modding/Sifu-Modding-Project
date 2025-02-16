#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OrderAnimSyncHelpers.generated.h"

UCLASS(Blueprintable)
class SIFU_API UOrderAnimSyncHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderAnimSyncHelpers();

    UFUNCTION(BlueprintCallable)
    static int32 BPF_GenerateAnimSyncID();
    
};

