#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "TargetableActorHelper.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API UTargetableActorHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTargetableActorHelper();
    UFUNCTION(BlueprintPure)
    static FVector BPF_GetTargetableLocation(const AActor* _actor);
    
};

