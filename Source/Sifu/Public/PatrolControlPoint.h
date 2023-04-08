#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimContainer.h"
#include "ESpeedState.h"
#include "PatrolControlPoint.generated.h"

USTRUCT(BlueprintType)
struct FPatrolControlPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vLocalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideActivityAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ActivityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_ActivityAnimContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideActivityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOverridenActivityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eSpeedStateToUse;
    
    SIFU_API FPatrolControlPoint();
};

