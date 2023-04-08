#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
#include "PropertyReaction.h"
#include "PushedFromGrabbedReaction.h"
#include "PushPropertyReaction.generated.h"

USTRUCT(BlueprintType)
struct FPushPropertyReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_WallSplashHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_WallSplashCloseHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_WallSplashHitOnWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyReaction m_BasePushReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushedFromGrabbedReaction m_PushedFromGrabbedReaction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EnvAttackRanges[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackEnvCapsuleExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnvAttackMaxAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnvAttackMaxAngleWitoutSnapDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNavigationCostHeuristicScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNavigationMaxPathCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EnvAttackImpactBoneName;
    
    SIFU_API FPushPropertyReaction();
};

