#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionAttack.generated.h"

class UOrderAttackParams;

UCLASS(Abstract, Blueprintable)
class SIFU_API UAIActionAttack : public UWGAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckObstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckFriendlyFire;
    
public:
    UAIActionAttack();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_NotifyAttackStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPreCreateOrderAttackParams(FName _paramsName, UOrderAttackParams* _orderParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCreatedOrderAttackParams(FName _paramsName, UOrderAttackParams* _orderParams);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetAttackRange() const;
    
};

