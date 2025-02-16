#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AimOffsetStruct.h"
#include "LookAtAnimRequest.generated.h"

class ULookAtAnimInstance;

UCLASS(Abstract, Blueprintable)
class SIFU_API ULookAtAnimRequest : public UObject {
    GENERATED_BODY()
public:
    ULookAtAnimRequest();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FAimOffsetStruct BPE_GetLookAtAimOffset(ULookAtAnimInstance* _animInstance) const;
    
};

