#pragma once
#include "CoreMinimal.h"
#include "ESCGameInstanceState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=GameFlowNodeMap -FallbackName=GameFlowNodeMap
#include "EMenuEnum.h"
#include "WGGameFlowNodeMap.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGGameFlowNodeMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuEnum m_eMenuToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCGameInstanceState m_eGameState;
    
    UWGGameFlowNodeMap();
};

