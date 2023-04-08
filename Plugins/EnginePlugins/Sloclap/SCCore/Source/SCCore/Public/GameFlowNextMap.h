#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EGameFlowTravelType.h"
#include "GameFlowNextMap.generated.h"

class UGameFlowNodeMap;

UCLASS(Blueprintable)
class SCCORE_API UGameFlowNextMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_ConditionGPTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_MapOptionsFromTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameFlowTravelType m_eTravelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameFlowNodeMap* m_NextMapNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_ReturnConditions;
    
    UGameFlowNextMap();
};

