#pragma once
#include "CoreMinimal.h"
#include "InteractiveDestructionComponent.h"
#include "DamagedWeaponInfo.h"
#include "WeaponDestructionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UWeaponDestructionComponent : public UInteractiveDestructionComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamagedWeaponSwitch, int32, _iWeaponIdx);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnDamagedWeaponSwitch m_OnDamagedWeaponSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDamagedWeaponInfo> m_DamagedWeaponInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDelayForCurrentOrderStop;
    
public:
    UWeaponDestructionComponent();
    UFUNCTION(BlueprintPure)
    int32 BPF_GetNumDamagedWeaponIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetDamagedWeaponIndex() const;
    
};

