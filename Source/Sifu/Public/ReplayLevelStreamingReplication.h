#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCReplayLevelStreamingData -FallbackName=SCReplayLevelStreamingData
#include "UObject/Object.h"
#include "ReplayLevelStreamingReplication.generated.h"

UCLASS()
class SIFU_API UReplayLevelStreamingReplication : public UObject {
    GENERATED_BODY()
public:
protected:
   /* UPROPERTY()
    FSCReplayLevelStreamingData m_StreamingState;*/
    
public:
    UReplayLevelStreamingReplication();
};

