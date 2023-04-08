#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "AnimContainer.h"
#include "ERagdollMeshOrientation.h"
#include "FallOnSlopeConfiguration.h"
#include "OrderDB.h"
#include "OrderFallOnSlopeDB.generated.h"

class UAkRtpc;
class UAnimSequence;
class UObject;
class UPhysicalMaterial;
class UPhysicsAsset;

UCLASS(Blueprintable)
class SIFU_API UOrderFallOnSlopeDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPhysicAnimEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFallOnSlopeConfiguration m_SlopeConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFallOnSlopeConfiguration m_GroundConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFallVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSlopeGroundAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSlopeRampAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PhysicalAnimationProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fActorRotationFromPelvisForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFloorDetectionLengthFromPelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPelvisVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_RagdollCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* m_PhysicAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStartupDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVelocityPushCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTotalMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_Loop;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERagdollMeshOrientation, FAnimContainer> m_RecoveryAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayInstantRecoveryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayInstantRecoveryAnimOnPlaneGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_InstantRecoveryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PoseSnapshotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorFallOnRightSide;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* m_RTCPSpeed;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_RTCPMinMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCallRTPCOnSelf;
    
    UOrderFallOnSlopeDB();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StopBodyRollLoop(UObject* _owner, uint8 _uiOrderId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StartBodyRollLoop(UObject* _owner, uint8 _uiOrderId, const UPhysicalMaterial* _floorMaterial, bool _bInitialTrace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BodyRollLoopMaterialSwitch(UObject* _owner, uint8 _uiOrderId, const UPhysicalMaterial* _floorMaterial) const;
    
};

