#pragma once
#include "CoreMinimal.h"
#include "WidgetPoolElement.h"
#include "WidgetPoolElementArray.generated.h"

USTRUCT(BlueprintType)
struct FWidgetPoolElementArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetPoolElement> m_Array;
    
    SIFU_API FWidgetPoolElementArray();
};

