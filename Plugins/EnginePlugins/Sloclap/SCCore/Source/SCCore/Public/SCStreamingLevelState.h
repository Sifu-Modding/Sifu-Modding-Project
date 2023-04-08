#pragma once
#include "CoreMinimal.h"
#include "StreamingLevelStateBase.h"
#include "SCStreamingLevelState.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCStreamingLevelState : public FStreamingLevelStateBase {
    GENERATED_BODY()
public:
    FSCStreamingLevelState();
};

