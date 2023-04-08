#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraTargetPosition.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCameraTargetPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vPreProcessedTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vRawTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLifeTime;
    
    SIFU_API FCameraTargetPosition();
};

