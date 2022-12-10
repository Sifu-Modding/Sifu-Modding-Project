#pragma once
#include "CoreMinimal.h"
#include "ReplaySizeManagement.h"
#include "ReplayInfo.h"
#include "ReplayListInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayListInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FReplaySizeManagement m_ReplaySizeManagement;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FReplayInfo> m_ReplayInfos;
    
    SIFU_API FReplayListInfo();
};

