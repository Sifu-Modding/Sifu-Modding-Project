#pragma once
#include "CoreMinimal.h"
#include "ReplayCameraMeshFadingData.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FReplayCameraMeshFadingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnabledByDefault;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* m_Collection;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ParameterName;
    
    SIFU_API FReplayCameraMeshFadingData();
};

