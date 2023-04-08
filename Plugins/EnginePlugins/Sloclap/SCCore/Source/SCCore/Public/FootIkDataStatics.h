#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCFootIkData.h"
#include "FootIkDataStatics.generated.h"

UCLASS(Blueprintable)
class UFootIkDataStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFootIkDataStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsFootPlanted(const FSCFootIkData& _inFootIkData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_GetLastFoundGround(const FSCFootIkData& _inFootIkData, FVector& _vOutLocation, FVector& _vOutNormal);
    
};

