#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttackComboDB.h"
#include "AttacksComboDB.generated.h"

UCLASS()
class SIFU_API UAttacksComboDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttackComboDB m_Struct;
    
    UAttacksComboDB();
};

