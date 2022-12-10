#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECharacterGender.h"
#include "CharacterStatsValues.h"
#include "CharacterBuildDB.generated.h"

UCLASS()
class SIFU_API UCharacterBuildDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ECharacterGender m_eGender;
    
    UPROPERTY(EditDefaultsOnly)
    FCharacterStatsValues m_DefaultStats;
    
    UPROPERTY(EditDefaultsOnly)
    FCharacterStatsValues m_DefaultStatsPerDifficulty[3];
    
    UCharacterBuildDB();
};

