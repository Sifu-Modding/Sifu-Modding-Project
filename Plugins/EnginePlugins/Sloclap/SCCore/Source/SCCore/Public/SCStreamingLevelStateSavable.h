#pragma once
#include "CoreMinimal.h"
#include "SCStreamingActorState.h"
#include "SCStreamingActorStateId.h"
#include "StreamingLevelStateBase.h"
#include "SCStreamingLevelStateSavable.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCStreamingLevelStateSavable : public FStreamingLevelStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FSCStreamingActorStateId, FSCStreamingActorState> m_ActorsState;
    
    FSCStreamingLevelStateSavable();
};

