#pragma once
#include "CoreMinimal.h"
#include "AIWaveParams.h"
#include "ArenaChallengeRefillDescription.generated.h"

class AAIWaveRefillDirector;
class UDataTable;

USTRUCT(BlueprintType)
struct FArenaChallengeRefillDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AAIWaveRefillDirector> m_RefillDirector;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIWaveParams> m_Waves;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDataTable> m_ArchetypeBank;
    
    SIFU_API FArenaChallengeRefillDescription();
};

