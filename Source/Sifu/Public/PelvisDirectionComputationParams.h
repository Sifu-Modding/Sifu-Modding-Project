#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PelvisDirectionComputationParams.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FPelvisDirectionComputationParams {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseFeetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInverseAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_boneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> m_eAxis;
    
public:
    FPelvisDirectionComputationParams();
};

