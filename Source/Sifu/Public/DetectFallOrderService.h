#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimContainer.h"
#include "BPOrderServiceInstance.h"
#include "ESlopeReaction.h"
#include "HitBox.h"
#include "OrderService.h"
#include "DetectFallOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UDetectFallOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IgnoreWhenDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bProjectVelocityOnDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_VelocityFallRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlopeReaction m_eReactionOnStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlopeReaction m_eSlopeReactionWhenStartsOnSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnterLeaveSlopeHitActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasHitOnEnterSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitOnEnterSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasHitOnLeaveSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitOnLeaveSlope;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlopeReaction m_eSlopeReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSteepSlopeAngleThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlopeReaction m_eSteepSlopeReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFarSlopeHAngleMinDegree;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlopeReaction m_eFarSlopeHAngleReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_CustomFallAnimOnSlope;
    
    UDetectFallOrderService();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector BPE_GetDirection(const FBPOrderServiceInstance& _instance) const;
    
};

