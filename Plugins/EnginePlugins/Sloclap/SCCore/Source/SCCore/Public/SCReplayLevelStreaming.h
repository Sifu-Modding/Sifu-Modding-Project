#pragma once
#include "CoreMinimal.h"
#include "ESCLevelStreamingState.h"
#include "SCReplayLevelStreaming.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCReplayLevelStreaming {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESCLevelStreamingState m_eDesiredState;
    
    UPROPERTY()
    FName m_LevelName;
    
    FSCReplayLevelStreaming();
};

