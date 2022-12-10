#pragma once
#include "CoreMinimal.h"
#include "AICharacterSpawnParams.h"
#include "AIArenaSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FAIArenaSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAICharacterSpawnParams m_ArenaSpawnParams;
    
    SIFU_API FAIArenaSpawnParams();
};

