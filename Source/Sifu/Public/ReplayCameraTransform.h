#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ReplayCameraTransform.generated.h"

USTRUCT(BlueprintType)
struct FReplayCameraTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector m_vLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat m_qRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vSensorSettings;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bInterpolate;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bCanEdit;
    
    SIFU_API FReplayCameraTransform();
};

