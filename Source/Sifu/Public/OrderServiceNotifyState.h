#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "OrderServiceNotifyState.generated.h"

class UOrderService;
class UOrderServiceActivationConditions;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UOrderServiceNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTickFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderService> m_ServiceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrderService* m_ServiceInstanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderServiceActivationConditions> m_activationCondition;
    
public:
    UOrderServiceNotifyState();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UOrderService> GetServiceClass(bool _bIncludeInstanced) const;
    
};

