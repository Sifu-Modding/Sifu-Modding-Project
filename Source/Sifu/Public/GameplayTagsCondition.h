#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsCondition.generated.h"

UCLASS()
class SIFU_API UGameplayTagsCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_RequiredTags;
    
    UGameplayTagsCondition();
};

