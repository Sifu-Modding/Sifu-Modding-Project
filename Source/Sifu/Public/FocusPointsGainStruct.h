#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "FocusPointsGainStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FFocusPointsGainStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_FocusGainEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fGainValue;
    
    FFocusPointsGainStruct();
};

