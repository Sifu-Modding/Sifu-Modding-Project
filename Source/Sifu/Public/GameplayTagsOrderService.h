#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGameplayTagsOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_SetTags;
    
    UPROPERTY(EditAnywhere)
    bool m_bOnHitComponent;
    
    UPROPERTY(EditAnywhere)
    bool m_bOnAbilityComponent;
    
    UGameplayTagsOrderService();
};

