#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "AIResistanceActions.h"
#include "BaseFightingStateBehavior.h"
#include "PropertyReactionHit.h"
#include "PropertyReactionMovement.h"
#include "PropertyReaction.generated.h"

USTRUCT(BlueprintType)
struct FPropertyReaction : public FBaseFightingStateBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyReactionMovement m_Movement;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_RecoveryAnims[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyReactionHit m_HitReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAlwayKeepCurrentStateDurationOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPauseGuardBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHoldDuringStructureBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAccumulatedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxAccumatedHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGroupMaxAccumulatedHitsByAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIResistanceActions m_Actions;
    
    SIFU_API FPropertyReaction();
};

