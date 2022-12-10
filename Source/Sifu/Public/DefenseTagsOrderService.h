#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "GameplayTagContainer.h"
#include "DefenseTagsOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDefenseTagsOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_SetHitBoxRequiredTags;
    
    UDefenseTagsOrderService();
};

