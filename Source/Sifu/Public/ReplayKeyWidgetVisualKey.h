#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCameraMode.h"
#include "EReplayKeyCutType.h"
#include "ReplayKeyWidgetVisualKey.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyWidgetVisualKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayKeyCameraMode m_eCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayKeyCutType m_eCutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iKeyTypeFlag;
    
    SIFU_API FReplayKeyWidgetVisualKey();
};
FORCEINLINE uint32 GetTypeHash(const FReplayKeyWidgetVisualKey) { return 0; }

