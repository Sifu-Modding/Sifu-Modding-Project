#pragma once
#include "CoreMinimal.h"
#include "SCTransform52.h"
#include "SCStreamingActorState.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCStreamingActorState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSCTransform52 m_Transform;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 m_uiTimestamp;
    
    FSCStreamingActorState();
};

