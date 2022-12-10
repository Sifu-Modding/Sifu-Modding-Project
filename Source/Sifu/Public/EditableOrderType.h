#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "SCUserDefinedEnumHandler.h"
#include "EditableOrderType.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FEditableOrderType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_BPOrderID;
    
    FEditableOrderType();
};

