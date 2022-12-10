#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AIPhaseNodeHardLink.h"
#include "AIPhaseNodeHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAIPhaseNodeHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIPhaseNodeHelper();
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetPhaseNodeIndex(const FAIPhaseNodeHardLink& _nodeHardLink);
    
};

