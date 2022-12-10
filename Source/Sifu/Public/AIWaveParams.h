#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "EAIArchetype.h"
#include "AIWaveBucketDescription.h"
#include "EStartWaveType.h"
#include "UObject/NoExportTypes.h"
#include "AIWaveParams.generated.h"

class AAISituationActor;

USTRUCT()
struct SIFU_API FAIWaveParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_WaveName;
    
    UPROPERTY(EditAnywhere)
    TMap<EAIArchetype, FAIWaveBucketDescription> m_ArchetypesBuckets;
    
    UPROPERTY(EditAnywhere)
    FInt32Range m_iMinMaxInCombat;
    
    UPROPERTY(EditAnywhere)
    EStartWaveType m_eStartWaveType;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag m_WaveTag;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_fDelayBeforeWave;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AAISituationActor> m_RelatedAISituation;
    
    FAIWaveParams();
};

