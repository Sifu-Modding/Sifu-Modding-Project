#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MainCharWeaponOverrideInfo.h"
#include "Templates/SubclassOf.h"
#include "WeaponGameplayData.generated.h"

class AFightingCharacter;
class UCurveFloat;
class UTargetSettingsDB;

UCLASS(Blueprintable)
class SIFU_API UWeaponGameplayData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTargetSettingsDB> m_throwFromPickUpTargetSettingsDB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_afDamageReceiveFromAttackPower[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_SlowMotionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSlowMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainCharWeaponOverrideInfo m_MainCharOverrides;
    
    UWeaponGameplayData();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_WeaponDataRef();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void BPE_OnChangeCombo(AFightingCharacter* _owner, bool _bDroppingWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_CanBeDrop() const;
    
};

