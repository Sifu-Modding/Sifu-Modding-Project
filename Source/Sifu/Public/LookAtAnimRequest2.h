#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AimOffsetStruct.h"
#include "LookAtAnimRequest2.generated.h"

class UPlayerAnim;

UCLASS(Abstract, Blueprintable)
class SIFU_API ULookAtAnimRequest2 : public UObject {
    GENERATED_BODY()
public:
    ULookAtAnimRequest2();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FAimOffsetStruct BPE_GetLookAtAimOffset(UPlayerAnim* _animInstance) const;
    
};

