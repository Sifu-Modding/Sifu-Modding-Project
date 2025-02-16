#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECharacterGender.h"
#include "CharacterStatsValues.h"
#include "CharacterBuildDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UCharacterBuildDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatsValues m_DefaultStats;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatsValues m_DefaultStatsPerDifficulty[3];
    
    UCharacterBuildDB();

};

