#pragma once
#include "CoreMinimal.h"
#include "AICharacterSpawnParams.h"
#include "AICharacterSpawnParamsList.generated.h"

USTRUCT(BlueprintType)
struct FAICharacterSpawnParamsList {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FAICharacterSpawnParams> m_CharacterSpawnParams;
    
    SIFU_API FAICharacterSpawnParamsList();
};

