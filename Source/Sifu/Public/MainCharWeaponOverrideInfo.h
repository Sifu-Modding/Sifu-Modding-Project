#pragma once
#include "CoreMinimal.h"
#include "BaseWeaponOverrideInfo.h"
#include "MainCharWeaponOverrideInfo.generated.h"

class UCombo;

USTRUCT(BlueprintType)
struct FMainCharWeaponOverrideInfo : public FBaseWeaponOverrideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombo* m_MainCharCombo;
    
    SIFU_API FMainCharWeaponOverrideInfo();
};

