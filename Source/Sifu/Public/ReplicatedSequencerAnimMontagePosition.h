#pragma once
#include "CoreMinimal.h"
#include "ReplicatedSequencerAnimMontagePosition.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedSequencerAnimMontagePosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMontageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPosition;
    
    SIFU_API FReplicatedSequencerAnimMontagePosition();
};

