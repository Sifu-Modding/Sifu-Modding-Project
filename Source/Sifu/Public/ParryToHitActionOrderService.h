#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BPOrderServiceInstance.h"
#include "OrderService.h"
#include "GameplayTagContainer.h"
#include "ParryToHitActionOrderService.generated.h"

class UHitActionLauncher;
class UBaseHitDetectionDB;

UCLASS(EditInlineNew)
class SIFU_API UParryToHitActionOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHitActionLauncher> m_hitActionLauncher;
    
    UPROPERTY(EditAnywhere)
    TArray<UBaseHitDetectionDB*> m_IgnoringHitDetectionDBs;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_IgnoringGameplayTagContainer;
    
    UParryToHitActionOrderService();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnParryFailed(FBPOrderServiceInstance _description) const;
    
};

