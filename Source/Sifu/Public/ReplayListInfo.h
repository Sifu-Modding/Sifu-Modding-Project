#pragma once
#include "CoreMinimal.h"
#include "ReplayInfo.h"
#include "ReplaySizeManagement.h"
#include "ReplayListInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayListInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplaySizeManagement m_ReplaySizeManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayInfo> m_ReplayInfos;
    
    SIFU_API FReplayListInfo();
};

