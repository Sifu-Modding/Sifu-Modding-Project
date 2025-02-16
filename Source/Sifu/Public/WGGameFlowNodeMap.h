#pragma once
#include "CoreMinimal.h"
#include "ESCGameInstanceState.h"
#include "GameFlowNodeMap.h"
#include "EMenuEnum.h"
#include "WGGameFlowNodeMap.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGGameFlowNodeMap : public UGameFlowNodeMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuEnum m_eMenuToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCGameInstanceState m_eGameState;
    
    UWGGameFlowNodeMap();

};

