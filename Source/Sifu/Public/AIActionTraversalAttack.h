#pragma once
#include "CoreMinimal.h"
#include "AIActionAttack.h"
#include "AIActionTraversalAttack.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIActionTraversalAttack : public UAIActionAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMiniumDistBetweenInstigatorAndTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetRadiusPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackCancelMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEntryPointReEvaluatePrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOffsetOnTraversalSide;
    
public:
    UAIActionTraversalAttack();

protected:
    UFUNCTION(BlueprintCallable)
    void BPF_OnReachedEntryPoint();
    
};

