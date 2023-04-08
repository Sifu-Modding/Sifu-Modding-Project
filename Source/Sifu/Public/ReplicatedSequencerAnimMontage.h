#pragma once
#include "CoreMinimal.h"
#include "ReplicatedSequencerAnimMontage.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FReplicatedSequencerAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMontageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiCinematicSlot;
    
    SIFU_API FReplicatedSequencerAnimMontage();
};

