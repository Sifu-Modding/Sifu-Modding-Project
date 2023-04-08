#pragma once
#include "CoreMinimal.h"
#include "CombatCircleDescription.generated.h"

USTRUCT(BlueprintType)
struct FCombatCircleDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NbPositionsToGenerate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPositionGenerationThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowSnapAfterRaycast;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSnapSafeDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNavPickingTolerance;
    
    SIFU_API FCombatCircleDescription();
};

