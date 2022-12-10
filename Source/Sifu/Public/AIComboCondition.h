#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionCondition.h"
#include "SCTypedValue.h"
#include "SCAIActionMemoryEntryHandler.h"
#include "AIComboCondition.generated.h"

class UAIFightingComponent;
class ASCCharacter;
class AActor;

UCLASS(Abstract, EditInlineNew)
class SIFU_API UAIComboCondition : public UComboTransitionCondition, public ISCAIActionMemoryEntryHandler {
    GENERATED_BODY()
public:
    UAIComboCondition();
    UFUNCTION(BlueprintPure)
    void BPF_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_TestCondition(const UAIFightingComponent* _aiComponent, const AActor* _target) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

