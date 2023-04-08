#pragma once
#include "CoreMinimal.h"
#include "AIDebugSpawnerInstance.generated.h"

class AAISpawner;
class UArchetypeAsset;

USTRUCT(BlueprintType)
struct FAIDebugSpawnerInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAISpawner* m_Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArchetypeAsset* m_Archetype;
    
    SIFU_API FAIDebugSpawnerInstance();
};

