#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OrderService.h"
#include "GameplayTagsOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UGameplayTagsOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_SetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnHitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnAbilityComponent;
    
    UGameplayTagsOrderService();
};

