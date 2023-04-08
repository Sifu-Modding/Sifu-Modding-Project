#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIWaveParams.h"
#include "ArenaChallengeRefillDescription.generated.h"

class AAIWaveRefillDirector;
class UDataTable;

USTRUCT(BlueprintType)
struct FArenaChallengeRefillDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AAIWaveRefillDirector> m_RefillDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIWaveParams> m_Waves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> m_ArchetypeBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseDistanceForSpawnerEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_fDistanceRangeForSpawnerScore;
    
    SIFU_API FArenaChallengeRefillDescription();
};

