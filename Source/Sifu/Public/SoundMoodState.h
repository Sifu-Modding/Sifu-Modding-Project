#pragma once
#include "CoreMinimal.h"
#include "ESoundMoodGameplayState.h"
#include "SoundMoodMeleeState.h"
#include "SoundMoodState.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSoundMoodState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundMoodGameplayState m_eGameplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundMoodMeleeState m_meleeState;
    
    FSoundMoodState();
};

