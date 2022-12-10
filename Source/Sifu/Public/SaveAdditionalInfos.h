#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.h"
#include "EGameDifficulty.h"
#include "SaveAdditionalInfos.generated.h"

USTRUCT(BlueprintType)
struct FSaveAdditionalInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 m_iAge;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FName m_MapTag;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    EGameDifficulty m_eDifficulty;
    
    SIFU_API FSaveAdditionalInfos();
};

