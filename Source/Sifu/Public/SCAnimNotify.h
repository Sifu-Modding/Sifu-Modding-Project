#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "BaseActorConditionInstance.h"
#include "SCAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API USCAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_triggerCondition;
    
public:
    USCAnimNotify();

};

