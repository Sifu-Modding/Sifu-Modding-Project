#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BaseActorCondition.h"
#include "GameplayTagsCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UGameplayTagsCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_RequiredTags;
    
    UGameplayTagsCondition();

};

