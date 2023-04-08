#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.h"
#include "EGameDifficulty.h"
#include "SaveAdditionalInfos.generated.h"

USTRUCT(BlueprintType)
struct FSaveAdditionalInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_MapTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EGameDifficulty m_eDifficulty;
    
    SIFU_API FSaveAdditionalInfos();
};

