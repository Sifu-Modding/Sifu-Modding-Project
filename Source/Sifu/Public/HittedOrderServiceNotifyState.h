#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "HittedServiceInfos.h"
#include "OrderServiceNotifyState.h"
#include "HittedOrderServiceNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UHittedOrderServiceNotifyState : public UOrderServiceNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedServiceInfos m_Infos;
    
    UHittedOrderServiceNotifyState();
    
    // Fix for true pure virtual functions not being implemented
};

