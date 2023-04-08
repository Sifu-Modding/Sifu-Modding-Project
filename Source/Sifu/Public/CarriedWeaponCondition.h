#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "Templates/SubclassOf.h"
#include "CarriedWeaponCondition.generated.h"

class UBaseWeaponData;

UCLASS(Blueprintable)
class SIFU_API UCarriedWeaponCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvertCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UBaseWeaponData>> m_WeaponList;
    
    UCarriedWeaponCondition();
};

