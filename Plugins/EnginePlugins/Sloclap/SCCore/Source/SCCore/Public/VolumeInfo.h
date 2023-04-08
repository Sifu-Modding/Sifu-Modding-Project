#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESCVolumeShape.h"
#include "VolumeInfo.generated.h"

USTRUCT(BlueprintType)
struct FVolumeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCVolumeShape m_eShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vShapeParameters;
    
    SCCORE_API FVolumeInfo();
};

