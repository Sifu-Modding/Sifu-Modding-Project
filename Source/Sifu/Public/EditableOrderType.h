#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "EOrderType.h"
#include "EditableOrderType.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FEditableOrderType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_BPOrderID;
    
    FEditableOrderType();
};

