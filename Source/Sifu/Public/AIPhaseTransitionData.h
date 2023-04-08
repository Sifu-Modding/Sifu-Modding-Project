#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransitionData.generated.h"

class ALevelSequenceActor;

USTRUCT(BlueprintType)
struct FAIPhaseTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNewPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPreviousPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ArchetypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_SequenceActor;
    
    SIFU_API FAIPhaseTransitionData();
};

