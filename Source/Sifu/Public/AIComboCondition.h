#pragma once
#include "CoreMinimal.h"
#include "SCAIActionMemoryEntryHandler.h"
#include "SCTypedValue.h"
#include "ComboTransitionCondition.h"
#include "AIComboCondition.generated.h"

class AActor;
class ASCCharacter;
class UAIFightingComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UAIComboCondition : public UComboTransitionCondition, public ISCAIActionMemoryEntryHandler {
    GENERATED_BODY()
public:
    UAIComboCondition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_TestCondition(const UAIFightingComponent* _aiComponent, const AActor* _target) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

