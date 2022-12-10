#pragma once
#include "CoreMinimal.h"
#include "WaveParams.generated.h"

class AAIArenaSpawner;

USTRUCT(BlueprintType)
struct FWaveParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_WaveTitle;
    
    UPROPERTY(EditAnywhere)
    TArray<AAIArenaSpawner*> m_WaveSpawners;
    
    SIFU_API FWaveParams();
};

