#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameFlowNodeMap.generated.h"

class UGameFlowNextMap;

UCLASS()
class SCCORE_API UGameFlowNodeMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<UGameFlowNextMap*> m_potentialNextMaps;
    
    UPROPERTY(VisibleAnywhere)
    FSoftObjectPath m_Map;
    
    UPROPERTY(VisibleAnywhere)
    FName m_MapTag;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer m_MapOptions;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bIsFirstPlayableMap;
    
    UGameFlowNodeMap();
};

