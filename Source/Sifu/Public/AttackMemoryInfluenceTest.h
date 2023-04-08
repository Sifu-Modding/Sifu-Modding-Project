#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIInfluenceTest.h"
#include "AttackMemoryInfluenceTest.generated.h"

class AThrowableActor;

UCLASS(Blueprintable)
class SIFU_API UAttackMemoryInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_AttackProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTestThrowAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AThrowableActor> m_ThrowableClassToTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMemoryLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiHitsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_HitTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDodged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAvoided;
    
public:
    UAttackMemoryInfluenceTest();
};

