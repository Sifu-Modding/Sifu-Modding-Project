#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CarriedWeaponContainer.generated.h"

class ABaseWeapon;

USTRUCT(BlueprintType)
struct FCarriedWeaponContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseWeapon> m_carriedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CarriedWeaponPoolName;
    
    SIFU_API FCarriedWeaponContainer();
};

