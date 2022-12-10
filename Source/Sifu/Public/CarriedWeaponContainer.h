#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CarriedWeaponContainer.generated.h"

class ABaseWeapon;

USTRUCT(BlueprintType)
struct FCarriedWeaponContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<ABaseWeapon> m_carriedWeapon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName m_CarriedWeaponPoolName;
    
    SIFU_API FCarriedWeaponContainer();
};

