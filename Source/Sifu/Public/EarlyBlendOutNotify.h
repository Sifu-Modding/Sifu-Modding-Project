#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFightingState.h"
#include "EarlyBlendOutNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UEarlyBlendOutNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFightingState> m_FightingStateActiveConditions;
    
    UEarlyBlendOutNotify();
};

