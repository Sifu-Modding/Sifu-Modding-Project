#pragma once
#include "CoreMinimal.h"
#include "SCTransform52.h"
#include "SCStreamingActorState.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCStreamingActorState {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<uint8> m_Data;
    
    UPROPERTY(SaveGame)
    FSCTransform52 m_Transform;
    
    UPROPERTY(SaveGame)
    uint64 m_uiTimestamp;
    
    FSCStreamingActorState();
};

