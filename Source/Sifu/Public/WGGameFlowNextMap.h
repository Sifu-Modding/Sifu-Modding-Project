#pragma once
#include "CoreMinimal.h"
#include "GameFlowNextMap.h"
#include "EMenuEnum.h"
#include "WGGameFlowNextMap.generated.h"

UCLASS()
class SIFU_API UWGGameFlowNextMap : public UGameFlowNextMap {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EMenuEnum m_eMenuToShow;
    
    UWGGameFlowNextMap();
};

