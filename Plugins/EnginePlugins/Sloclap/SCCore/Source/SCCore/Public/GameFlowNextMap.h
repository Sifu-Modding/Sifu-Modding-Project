#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EGameFlowTravelType.h"
#include "GameFlowNextMap.generated.h"

class UGameFlowNodeMap;

UCLASS()
class SCCORE_API UGameFlowNextMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer m_ConditionGPTags;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer m_MapOptionsFromTransition;
    
    UPROPERTY(VisibleAnywhere)
    EGameFlowTravelType m_eTravelType;
    
    UPROPERTY(VisibleAnywhere)
    UGameFlowNodeMap* m_NextMapNode;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer m_ReturnConditions;
    
    UGameFlowNextMap();
};

