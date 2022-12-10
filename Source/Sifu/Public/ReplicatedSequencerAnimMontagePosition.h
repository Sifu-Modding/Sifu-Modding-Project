#pragma once
#include "CoreMinimal.h"
#include "ReplicatedSequencerAnimMontagePosition.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedSequencerAnimMontagePosition {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_iMontageId;
    
    UPROPERTY()
    float m_fPosition;
    
    SIFU_API FReplicatedSequencerAnimMontagePosition();
};

