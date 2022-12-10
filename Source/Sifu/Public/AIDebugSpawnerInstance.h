#pragma once
#include "CoreMinimal.h"
#include "AIDebugSpawnerInstance.generated.h"

class AAISpawner;
class UArchetypeAsset;

USTRUCT(BlueprintType)
struct FAIDebugSpawnerInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AAISpawner* m_Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UArchetypeAsset* m_Archetype;
    
    SIFU_API FAIDebugSpawnerInstance();
};

