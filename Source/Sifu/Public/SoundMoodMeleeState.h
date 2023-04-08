#pragma once
#include "CoreMinimal.h"
#include "SoundMoodMeleeState.generated.h"

class AAISituationActor;

USTRUCT(BlueprintType)
struct SIFU_API FSoundMoodMeleeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMeleeDifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsFightActive;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAISituationActor> m_AiSituation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAISituationActor> m_LastEncounteredSituation;
    
    FSoundMoodMeleeState();
};

