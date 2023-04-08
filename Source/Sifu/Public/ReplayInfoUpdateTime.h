#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplayInfoUpdateTime.generated.h"

USTRUCT(BlueprintType)
struct FReplayInfoUpdateTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_LastReplayEditorUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasLastReplayEditorUpdateTime;
    
    SIFU_API FReplayInfoUpdateTime();
};

