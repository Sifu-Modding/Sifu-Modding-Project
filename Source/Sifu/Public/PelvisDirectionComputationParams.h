#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PelvisDirectionComputationParams.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FPelvisDirectionComputationParams {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bUseFeetLocation;
    
    UPROPERTY(EditAnywhere)
    bool m_bInverseAxis;
    
    UPROPERTY(EditAnywhere)
    FName m_boneName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> m_eAxis;
    
public:
    FPelvisDirectionComputationParams();
};

