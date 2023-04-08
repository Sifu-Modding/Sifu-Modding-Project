#pragma once
#include "CoreMinimal.h"
#include "SCStreamingLevelId.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCStreamingLevelId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_ID;
    
    FSCStreamingLevelId();
};

