#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseWeaponOverrideInfo.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FBaseWeaponOverrideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLifeDamageModiferOnGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStructureDamageModifierOnGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> m_GrantedEffects;
    
    SIFU_API FBaseWeaponOverrideInfo();
};

