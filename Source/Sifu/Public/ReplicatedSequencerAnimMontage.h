#pragma once
#include "CoreMinimal.h"
#include "ReplicatedSequencerAnimMontage.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FReplicatedSequencerAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_iMontageId;
    
    UPROPERTY()
    UAnimSequenceBase* m_AnimSequence;
    
    UPROPERTY()
    uint8 m_uiCinematicSlot;
    
    SIFU_API FReplicatedSequencerAnimMontage();
};

