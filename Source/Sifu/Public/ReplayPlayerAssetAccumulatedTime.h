#pragma once
#include "CoreMinimal.h"
#include "ReplayPlayerAssetAccumulatedTime.generated.h"

USTRUCT(BlueprintType)
struct FReplayPlayerAssetAccumulatedTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAccumulatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCachedContainerIndex;
    
    SIFU_API FReplayPlayerAssetAccumulatedTime();
};

