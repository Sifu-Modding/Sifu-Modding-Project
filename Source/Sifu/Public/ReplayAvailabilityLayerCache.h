#pragma once
#include "CoreMinimal.h"
#include "AvailabilityLayerCaches.h"
#include "ReplayAvailabilityLayerCache.generated.h"

USTRUCT(BlueprintType)
struct FReplayAvailabilityLayerCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_TimeControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_KeyEdition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_FreeFly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_KeySelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_HoveringKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_Scrubbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_GoToTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_MovingKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_MoveKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_ReplayPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_ReplayEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerCaches m_KeyCopied;
    
    SIFU_API FReplayAvailabilityLayerCache();
};

