#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCReplayLevelStreamingData -FallbackName=SCReplayLevelStreamingData
#include "ReplayLevelStreamingReplication.generated.h"

UCLASS(Blueprintable)
class SIFU_API UReplayLevelStreamingReplication : public UObject {
    GENERATED_BODY()
public:
protected:
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCReplayLevelStreamingData m_StreamingState;*/
    
public:
    UReplayLevelStreamingReplication();
};

