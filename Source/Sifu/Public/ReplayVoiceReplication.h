#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.h"
#include "ReplayVoiceReplication.generated.h"

USTRUCT(BlueprintType)
struct FReplayVoiceReplication {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceArchetypeSwitchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceVariationSwitchName;
    
    SIFU_API FReplayVoiceReplication();
};

