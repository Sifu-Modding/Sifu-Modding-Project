#pragma once
#include "CoreMinimal.h"
#include "ECharacterStat.h"
#include "CharacterStatsValues.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStatsValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterStat, float> m_Values;
    
    SIFU_API FCharacterStatsValues();
};

