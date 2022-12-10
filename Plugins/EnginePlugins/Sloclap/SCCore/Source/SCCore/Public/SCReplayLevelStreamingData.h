#pragma once
#include "CoreMinimal.h"
#include "SCReplayLevelStreamingState.h"
#include "SCReplayLevelStreamingData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCReplayLevelStreamingData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSCReplayLevelStreamingState m_InitialState;
    
protected:
    UPROPERTY()
    TMap<uint32, FSCReplayLevelStreamingState> m_LevelStreamingEvents;
    
public:
    FSCReplayLevelStreamingData();
};

