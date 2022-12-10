#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PushObjectAnimRequest.generated.h"

class UAnimSequence;
class AActor;
class APushableActor;

UCLASS(Blueprintable)
class SIFU_API UPushObjectAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UPushObjectAnimRequest();
    UFUNCTION(BlueprintImplementableEvent)
    UAnimSequence* BPE_GetPushAnimation(const AActor* _Instigator, const FVector& _vTargetDir, const APushableActor* _pushable, bool& _bOutMirror) const;
    
};

