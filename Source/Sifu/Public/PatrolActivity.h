#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "PatrolActivity.generated.h"

USTRUCT(BlueprintType)
struct FPatrolActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_animContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fActivityDuration;
    
    SIFU_API FPatrolActivity();
};

