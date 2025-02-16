#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "SCContentRestrictionBlueprintHelper.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCContentRestrictionBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCContentRestrictionBlueprintHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsContentAvailable(FGameplayTag _wantedContentType);
    
};

