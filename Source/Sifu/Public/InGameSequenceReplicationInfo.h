#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequencePlayer.h"
#include "ESequenceState.h"
#include "InGameSequenceReplicationInfo.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FInGameSequenceReplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_LevelSequenceToReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackParams m_playbackParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequenceState m_eSequenceState;
    
    SIFU_API FInGameSequenceReplicationInfo();
};

