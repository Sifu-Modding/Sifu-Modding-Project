#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIInfluenceTest.h"
#include "AttackPropertiesInfluenceTest.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAttackPropertiesInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_AttackProperties;
    
public:
    UAttackPropertiesInfluenceTest();
};

