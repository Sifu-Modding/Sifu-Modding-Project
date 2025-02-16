#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseWeaponOverrideInfo.h"
#include "EOrderType.h"
#include "ETargetingPrio.h"
#include "Templates/SubclassOf.h"
#include "VariableWeightLayerToBoneMask.h"
#include "BaseWeaponData.generated.h"

class ABaseWeapon;
class AFightingCharacter;
class UCurveFloat;
class UPlayerAnim;
class UThrowObjectAnimRequest;

UCLASS(Blueprintable)
class SIFU_API UBaseWeaponData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_OnWeaponSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOrderType, bool> m_UseSwapHandByOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseSwapHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowFakieFromAnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DesignatedTargetPreciseSearchWidthCurveForAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DesignatedTargetRoughSearchWidthCurveForAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETargetingPrio, float> m_mfRangeMaxForAttack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_afDamageReceiveFromAttackPower[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_afGuardTypeDamageMultiplier[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_SlowMotionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSlowMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UThrowObjectAnimRequest> m_ThrowFromPickupAnimRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseWeaponOverrideInfo m_MainCharOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseSpecificMirrorPickupAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOrderType, FVariableWeightLayerToBoneMask> m_variableWeightLayerByOrder;
    
    UBaseWeaponData();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void BPE_PrePickUpWeapon(AFightingCharacter* _owner, UPlayerAnim* _animGraph, const ABaseWeapon* _weapon, bool _bMirror) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void BPE_PreDropWeapon(AFightingCharacter* _owner, UPlayerAnim* _animGraph, const ABaseWeapon* _weapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void BPE_OnUnequipWeapon(AFightingCharacter* _owner, UPlayerAnim* _animGraph, const ABaseWeapon* _weapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void BPE_OnEquipWeapon(AFightingCharacter* _owner, UPlayerAnim* _animGraph, const ABaseWeapon* _weapon) const;
    
};

