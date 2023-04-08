#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TargetableActorHelper.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API UTargetableActorHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTargetableActorHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BPF_GetTargetableLocation(const AActor* _actor);
    
};

