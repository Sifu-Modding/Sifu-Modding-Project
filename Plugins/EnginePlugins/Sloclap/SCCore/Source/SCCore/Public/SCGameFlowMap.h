#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESCGameInstanceState.h"
#include "SCGameFlowMap.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCGameFlowMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCGameInstanceState m_State;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_StateName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_Map;
    
    FSCGameFlowMap();
};

