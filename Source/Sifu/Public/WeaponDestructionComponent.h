#pragma once
#include "CoreMinimal.h"
#include "DamagedWeaponInfo.h"
#include "InteractiveDestructionComponent.h"
#include "WeaponDestructionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UWeaponDestructionComponent : public UInteractiveDestructionComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamagedWeaponSwitch, int32, _iWeaponIdx);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamagedWeaponSwitch m_OnDamagedWeaponSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamagedWeaponInfo> m_DamagedWeaponInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayForCurrentOrderStop;
    
public:
    UWeaponDestructionComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetNumDamagedWeaponIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetDamagedWeaponIndex() const;
    
};

