#pragma once
#include "CoreMinimal.h"
#include "GameFlowNextMap.h"
#include "EMenuEnum.h"
#include "WGGameFlowNextMap.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGGameFlowNextMap : public UGameFlowNextMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuEnum m_eMenuToShow;
    
    UWGGameFlowNextMap();

};

