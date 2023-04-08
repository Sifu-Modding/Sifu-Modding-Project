#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "NavAreaPerRange.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct FNavAreaPerRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> m_associatedArea;
    
    SIFU_API FNavAreaPerRange();
};

