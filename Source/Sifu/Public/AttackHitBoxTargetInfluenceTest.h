#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "EAttackTarget.h"
#include "AttackHitBoxTargetInfluenceTest.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAttackHitBoxTargetInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackTarget m_eHitTarget;
    
public:
    UAttackHitBoxTargetInfluenceTest();
};

