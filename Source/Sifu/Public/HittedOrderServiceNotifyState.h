#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "OrderServiceNotifyState.h"
#include "HittedServiceInfos.h"
#include "HittedOrderServiceNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UHittedOrderServiceNotifyState : public UOrderServiceNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHittedServiceInfos m_Infos;
    
    UHittedOrderServiceNotifyState();
    
    // Fix for true pure virtual functions not being implemented
};

