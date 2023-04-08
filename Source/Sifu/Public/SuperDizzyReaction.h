#pragma once
#include "CoreMinimal.h"
#include "SuperDizzyReaction.generated.h"

USTRUCT(BlueprintType)
struct FSuperDizzyReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMandatoryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAccumulatedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxAccumatedHits;
    
    SIFU_API FSuperDizzyReaction();
};

