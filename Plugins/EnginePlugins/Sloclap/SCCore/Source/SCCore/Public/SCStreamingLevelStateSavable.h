#pragma once
#include "CoreMinimal.h"
#include "StreamingLevelStateBase.h"
#include "SCStreamingActorStateId.h"
#include "SCStreamingActorState.h"
#include "SCStreamingLevelStateSavable.generated.h"

USTRUCT()
struct SCCORE_API FSCStreamingLevelStateSavable : public FStreamingLevelStateBase {
    GENERATED_BODY()
public:
   /* UPROPERTY(SaveGame)
    TMap<FSCStreamingActorStateId, FSCStreamingActorState> m_ActorsState;*/
    
    FSCStreamingLevelStateSavable();
};

