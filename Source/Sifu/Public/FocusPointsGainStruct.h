#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "FocusPointsGainStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FFocusPointsGainStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_FocusGainEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGainValue;
    
    FFocusPointsGainStruct();
};

