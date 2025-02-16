#pragma once
#include "CoreMinimal.h"
#include "AnimSyncContainer.h"
#include "EFightingState.h"
#include "EOrderType.h"
#include "EQuadrantTypes.h"
#include "EditableOrderType.h"
#include "HitActionLauncher.h"
#include "HitDescription.h"
#include "OverridingHitBox.h"
#include "WeaponAnimInfo.h"
#include "SynchronizedAttackHitActionLauncher.generated.h"

class AActor;
class AFightingCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API USynchronizedAttackHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorByQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eInstigatorOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eVictimOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsInstigatorSnaper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsVictimSnaper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFightingState> m_InstigatorRemoveFightingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFightingState> m_VictimRemoveFightingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableOrderType m_OrderTypeInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableOrderType m_OrderTypeVictim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanCounterGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseVictimForQuadrantComputation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eStartQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorOnBackFrontQuadrant;
    
public:
    USynchronizedAttackHitActionLauncher();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_AreHitLethal(AFightingCharacter* _victimChar, const TArray<FOverridingHitBox>& _hitsToApply);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnLaunch(const FHitDescription& _hitDescription, AActor* _Instigator, uint8 _uiInstigatorOrder, AActor* _victim, uint8 _uiVictimOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring) const;
    
};

