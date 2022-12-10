#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ThrowObjectAnimRequest.generated.h"

class UAttackDB;
class AActor;
class AThrowableActor;

UCLASS(Blueprintable)
class SIFU_API UThrowObjectAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UThrowObjectAnimRequest();
    UFUNCTION(BlueprintImplementableEvent)
    UAttackDB* BPE_GetThrowComboAttack(const AActor* _Instigator, const FVector& _vTargetDir, const AThrowableActor* _throwable, const AActor* _target, bool& _bOutMirror) const;
    
};

