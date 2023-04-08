#pragma once
#include "CoreMinimal.h"
#include "ReplayCameraMeshFadingData.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FReplayCameraMeshFadingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnabledByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ParameterName;
    
    SIFU_API FReplayCameraMeshFadingData();
};

