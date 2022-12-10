#pragma once
#include "CoreMinimal.h"
#include "SCStreamingLevelId.h"
#include "SCStreamingActorStateId.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCStreamingActorStateId {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName m_ID;
    
    UPROPERTY(SaveGame)
    FSCStreamingLevelId m_LevelId;
    
    FSCStreamingActorStateId();
};

