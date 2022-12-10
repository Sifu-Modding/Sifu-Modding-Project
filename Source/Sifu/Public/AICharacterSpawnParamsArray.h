#pragma once
#include "CoreMinimal.h"
#include "AIArenaSpawnParams.h"
#include "AICharacterSpawnParamsArray.generated.h"

USTRUCT(BlueprintType)
struct FAICharacterSpawnParamsArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FAIArenaSpawnParams> m_CharacterSpawnParams;
    
    SIFU_API FAICharacterSpawnParamsArray();
};

