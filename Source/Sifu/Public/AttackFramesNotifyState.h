#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AttackFramesNotifyState.generated.h"

class UAttackDB;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UAttackFramesNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackDB* m_DB;
    
    UAttackFramesNotifyState();

};

