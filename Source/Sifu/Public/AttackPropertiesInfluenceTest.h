#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIInfluenceTest.h"
#include "AttackPropertiesInfluenceTest.generated.h"

UCLASS()
class SIFU_API UAttackPropertiesInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_AttackProperties;
    
public:
    UAttackPropertiesInfluenceTest();
};

