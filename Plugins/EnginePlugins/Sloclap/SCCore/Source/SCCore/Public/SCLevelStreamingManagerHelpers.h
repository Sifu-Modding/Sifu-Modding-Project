#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCLevelStreamingManagerHelpers.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCLevelStreamingManagerHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCLevelStreamingManagerHelpers();

    UFUNCTION(BlueprintCallable)
    static void BPF_SetStreamingVolumesEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlockLoadingsOnNextUpdate();
    
};

