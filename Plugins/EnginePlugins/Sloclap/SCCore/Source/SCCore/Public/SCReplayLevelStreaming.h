#pragma once
#include "CoreMinimal.h"
#include "ESCLevelStreamingState.h"
#include "SCReplayLevelStreaming.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCReplayLevelStreaming {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCLevelStreamingState m_eDesiredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LevelName;
    
    FSCReplayLevelStreaming();
};

