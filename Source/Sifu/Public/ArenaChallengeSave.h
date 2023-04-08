#pragma once
#include "CoreMinimal.h"
#include "ArenaChallengeSave.generated.h"

USTRUCT(BlueprintType)
struct FArenaChallengeSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iHighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iBestStarCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bHasBeenSeen;
    
    SIFU_API FArenaChallengeSave();
};

