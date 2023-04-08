#pragma once
#include "CoreMinimal.h"
#include "ComboAIConditionFindActorEnvQuery.h"
#include "Templates/SubclassOf.h"
#include "AIWallJumpFindActorToTargetCondition.generated.h"

class UAIActionWallJumpAttack;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIWallJumpFindActorToTargetCondition : public UComboAIConditionFindActorEnvQuery {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIActionWallJumpAttack> m_AttackAction;
    
public:
    UAIWallJumpFindActorToTargetCondition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UAIActionWallJumpAttack> BPF_GetAttackActionClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIActionWallJumpAttack* BPF_GetAttackAction() const;
    
};

