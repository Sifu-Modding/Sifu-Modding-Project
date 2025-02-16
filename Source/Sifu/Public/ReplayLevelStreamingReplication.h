#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCReplayLevelStreamingData.h"
#include "ReplayLevelStreamingReplication.generated.h"

UCLASS(Blueprintable)
class SIFU_API UReplayLevelStreamingReplication : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCReplayLevelStreamingData m_StreamingState;
    
public:
    UReplayLevelStreamingReplication();

};

