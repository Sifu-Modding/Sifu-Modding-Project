#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AttackFramesNotifyState.generated.h"

class UAttackDB;

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UAttackFramesNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAttackDB* m_DB;
    
    UAttackFramesNotifyState();
};

