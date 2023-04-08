#pragma once
#include "CoreMinimal.h"
#include "AnimSyncContainer.h"
#include "EditableOrderType.h"
#include "HitDescription.h"
#include "OverridingHitBox.h"
#include "SynchronizedAttackHitActionLauncher.h"
#include "WeaponAnimInfo.h"
#include "SynchronizedAttackLoopHitActionLauncher.generated.h"

class AFightingCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API USynchronizedAttackLoopHitActionLauncher : public USynchronizedAttackHitActionLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableOrderType m_grabOrderTypeInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableOrderType m_grabOrderTypeVictim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLoopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFinalDistanceFromFengjie;
    
public:
    USynchronizedAttackLoopHitActionLauncher();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetSynchronizedAttackLoopAnims(const FHitDescription& _hitDescription, AFightingCharacter* _victimChar, bool& _bOutIsLethal, FAnimSyncContainer& _outAnimsEntry, FAnimSyncContainer& _outAnimsLoop, FAnimSyncContainer& _outAnimsExit, FWeaponAnimInfo& _outAttackerWeaponAnimEntry, FWeaponAnimInfo& _outAttackerWeaponAnimLoop, FWeaponAnimInfo& _outAttackerWeaponAnimExit, TArray<FOverridingHitBox>& _outHitsToApply) const;
    
};

