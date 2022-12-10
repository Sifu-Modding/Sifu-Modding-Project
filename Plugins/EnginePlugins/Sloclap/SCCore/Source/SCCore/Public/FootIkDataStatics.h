#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCFootIkData.h"
#include "UObject/NoExportTypes.h"
#include "FootIkDataStatics.generated.h"

UCLASS(BlueprintType)
class UFootIkDataStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFootIkDataStatics();
    UFUNCTION(BlueprintPure)
    static bool BPF_IsFootPlanted(const FSCFootIkData& _inFootIkData);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_GetLastFoundGround(const FSCFootIkData& _inFootIkData, FVector& _vOutLocation, FVector& _vOutNormal);
    
};

