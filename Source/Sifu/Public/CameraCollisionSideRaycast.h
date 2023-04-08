#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraCollisionSideRaycast.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCameraCollisionSideRaycast {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vStartLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vEndLocal;
    
    FCameraCollisionSideRaycast();
};

