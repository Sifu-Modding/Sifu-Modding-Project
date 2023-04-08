#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESCGameInstanceState.h"
#include "SCGameFlowData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCGameFlowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCGameInstanceState m_eInitialState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_InitialMap;
    
    FSCGameFlowData();
};

