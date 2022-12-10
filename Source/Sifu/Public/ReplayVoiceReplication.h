#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.h"
#include "ReplayVoiceReplication.generated.h"

USTRUCT(BlueprintType)
struct FReplayVoiceReplication {
    GENERATED_BODY()
public:
    UPROPERTY()
    ECharacterGender m_eGender;
    
    UPROPERTY()
    FName m_VoiceArchetypeSwitchName;
    
    UPROPERTY()
    FName m_VoiceVariationSwitchName;
    
    SIFU_API FReplayVoiceReplication();
};

