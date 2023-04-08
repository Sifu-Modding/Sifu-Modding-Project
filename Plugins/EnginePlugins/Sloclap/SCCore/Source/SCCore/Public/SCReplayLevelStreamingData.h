#pragma once
#include "CoreMinimal.h"
#include "SCReplayLevelStreamingState.h"
#include "SCReplayLevelStreamingData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCReplayLevelStreamingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCReplayLevelStreamingState m_InitialState;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FSCReplayLevelStreamingState> m_LevelStreamingEvents;
    
public:
    FSCReplayLevelStreamingData();
};

