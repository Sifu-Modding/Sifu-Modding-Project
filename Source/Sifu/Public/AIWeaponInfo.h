#pragma once
#include "CoreMinimal.h"
#include "WeaponOverrideInfo.h"
#include "AIWeaponInfo.generated.h"

class UWeaponInfoForAIDataAsset;

USTRUCT(BlueprintType)
struct FAIWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponInfoForAIDataAsset* m_WeaponInfoForAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanFetch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseThiWeaponAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWeaponShouldBreakWhenDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWeaponShouldRegenerateAfterThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWeaponCanTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponOverrideInfo m_WeaponOverride;
    
    SIFU_API FAIWeaponInfo();
};

