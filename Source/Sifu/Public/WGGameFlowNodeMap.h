#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=GameFlowNodeMap -FallbackName=GameFlowNodeMap
#include "EMenuEnum.h"
#include "ESCGameInstanceState.h"
#include "WGGameFlowNodeMap.generated.h"

UCLASS()
class SIFU_API UWGGameFlowNodeMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EMenuEnum m_eMenuToShow;
    
    UPROPERTY(VisibleAnywhere)
    ESCGameInstanceState m_eGameState;
    
    UWGGameFlowNodeMap();
};

