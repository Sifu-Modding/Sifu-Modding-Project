#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ComboAttack.h"
#include "AttackDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAttackDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboAttack m_Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iVersionNumber;
    
    UAttackDB();
};

