#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimContainer.h"
#include "ESCCardinalPoints.h"
#include "InheritedDataAsset.h"
#include "SCUserDefinedEnumHandler.h"
#include "AnimByCardinalThenHeight.h"
#include "AnimByHeight.h"
#include "DeflectImpact.h"
#include "EAvoidLaunchMethod.h"
#include "EHeight.h"
#include "EQuadrantTypes.h"
#include "HitBox.h"
#include "HitImpact.h"
#include "HitRequest.h"
#include "Templates/SubclassOf.h"
#include "GuardDB.generated.h"

class AFightingCharacter;
class UAnimSequence;
class UAvailabilityLayerData;
class UCurveFloat;
class UDefenseAnimRequest;
class UParryAnimRequest;

UCLASS(Blueprintable)
class SIFU_API UGuardDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_aGuardAnimations[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGuardMirrorFrontRightBackLeft;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimByHeight m_aGuardPrepAnimations[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimByCardinalThenHeight m_aHittedGuardAnimations[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimByCardinalThenHeight m_aHittedDeflectAnimations[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_aGuardAnimationsWeapon[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimByHeight m_aGuardPrepAnimationsWeapon[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimByCardinalThenHeight m_aHittedGuardAnimationsWeapon[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimByCardinalThenHeight m_aHittedDeflectAnimationsWeapon[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardAngleRootToHips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardAngleHipsToRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGuardReorientBackToFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPrepEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DynamicEnteringPrep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnteringPrepDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DynamicExitingPrep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExitingPrepDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPrepRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPrepForbidMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fKnockbackCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_ParryHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParryStructureRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParryFreezeFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParrySBFreezeFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ParryAttackerStructureDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ParryAttackerSuperDizzyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bApplyDamagesOnGuardBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeflectImpact m_DefaultDeflectImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitImpact m_DefaultHitImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitImpact m_DefaultGuardImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDeflectedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DeflectedAttackScaleCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvoidLaunchMethod m_eDeflectedLaunchMethodOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTmpEnableDeflectedOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParryAnimDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGrabDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_ParryWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForcedGuardDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_ForcedGuardAvailabilityLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDefenseAnimRequest> m_DefenseAnimRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UParryAnimRequest> m_ParryAnimRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_BPPickupOnParryOrderID;
    
    UGuardDB();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetPickupOnParryAnim(const FHitRequest& _request, AFightingCharacter* _character, FAnimContainer& _outAnim) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* BPF_GetHittedGuardAnimWeapon(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* BPF_GetHittedGuardAnim(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* BPF_GetHittedDeflectAnimWeapon(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* BPF_GetHittedDeflectAnim(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight) const;
    
};

