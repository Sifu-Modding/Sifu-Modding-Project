#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELimbs.h"
#include "LimbsHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API ULimbsHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULimbsHelper();
    UFUNCTION(BlueprintPure)
    static ELimbs BPF_Mirror(ELimbs _eLimb, bool _bMirror);
    
};

