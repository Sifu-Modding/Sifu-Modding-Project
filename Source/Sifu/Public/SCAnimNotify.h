#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "BaseActorConditionInstance.h"
#include "SCAnimNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API USCAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_triggerCondition;
    
public:
    USCAnimNotify();
};

