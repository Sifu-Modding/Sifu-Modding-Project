#pragma once
#include "CoreMinimal.h"
#include "AISpawnedDescription.generated.h"

USTRUCT(BlueprintType)
struct FAISpawnedDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiSpawnerGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSpawnerIndexInLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bKilled;
    
    SIFU_API FAISpawnedDescription();
};

