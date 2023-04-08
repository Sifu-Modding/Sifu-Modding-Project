#pragma once
#include "CoreMinimal.h"
#include "SpawnerGroupSoundData.generated.h"

class AAISituationActor;
class ASpawnerGroup;

USTRUCT(BlueprintType)
struct FSpawnerGroupSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FightStateOffDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_MeleeStateLvlSplits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_MeleeDangerLvlSplits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MeleeFightStateOffDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMeleeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsThreatEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawnerGroup*> m_DependantGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISituationActor*> m_DependantSituations;
    
    SIFU_API FSpawnerGroupSoundData();
};

