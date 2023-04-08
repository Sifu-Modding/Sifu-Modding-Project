#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIWaveBucketDescription.h"
#include "EAIArchetype.h"
#include "EStartWaveType.h"
#include "AIWaveParams.generated.h"

class AAISituationActor;

USTRUCT(BlueprintType)
struct SIFU_API FAIWaveParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIArchetype, FAIWaveBucketDescription> m_ArchetypesBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range m_iMinMaxInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStartWaveType m_eStartWaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_WaveTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_WaveTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_fDelayBeforeWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AAISituationActor> m_RelatedAISituation;
    
    FAIWaveParams();
};

