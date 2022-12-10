#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "OrderServiceFrameRangeRequest.generated.h"

class ABaseCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UOrderServiceFrameRangeRequest : public UObject {
    GENERATED_BODY()
public:
    UOrderServiceFrameRangeRequest();
    UFUNCTION(BlueprintNativeEvent)
    FFloatRange BPE_GetFrameRange(uint8 _uiOrderId, const ABaseCharacter* _owner) const;
    
};

