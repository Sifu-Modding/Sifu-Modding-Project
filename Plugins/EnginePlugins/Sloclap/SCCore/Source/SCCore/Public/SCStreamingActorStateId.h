#pragma once
#include "CoreMinimal.h"
#include "SCStreamingLevelId.h"
#include "SCStreamingActorStateId.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCStreamingActorStateId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSCStreamingLevelId m_LevelId;
    
    FSCStreamingActorStateId();
};
FORCEINLINE uint32 GetTypeHash(const FSCStreamingActorStateId) { return 0; }

