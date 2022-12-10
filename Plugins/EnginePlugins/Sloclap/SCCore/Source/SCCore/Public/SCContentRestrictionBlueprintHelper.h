#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "SCContentRestrictionBlueprintHelper.generated.h"

UCLASS(BlueprintType)
class SCCORE_API USCContentRestrictionBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCContentRestrictionBlueprintHelper();
    UFUNCTION(BlueprintPure)
    static bool BPF_IsContentAvailable(FGameplayTag _wantedContentType);
    
};

