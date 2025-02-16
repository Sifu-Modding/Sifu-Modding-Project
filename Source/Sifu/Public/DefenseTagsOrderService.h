#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OrderService.h"
#include "DefenseTagsOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UDefenseTagsOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_SetHitBoxRequiredTags;
    
    UDefenseTagsOrderService();

};

