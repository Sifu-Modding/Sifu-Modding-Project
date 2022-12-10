#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCutType.h"
#include "EReplayKeyCameraMode.h"
#include "ReplayKeyWidgetVisualKey.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyWidgetVisualKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EReplayKeyCameraMode m_eCameraMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EReplayKeyCutType m_eCutType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iKeyTypeFlag;
    
    SIFU_API FReplayKeyWidgetVisualKey();
};

