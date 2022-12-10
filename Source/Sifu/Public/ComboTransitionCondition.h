#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ComboConditionValueToNodeMap.h"
#include "ComboTransitionCondition.generated.h"

class AFightingCharacter;
class UComboTransitionCondition;
class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<uint8, UComboTransitionCondition*> m_TargetConditions;
    
    UPROPERTY()
    TMap<FGuid, FComboConditionValueToNodeMap> m_PerConditionValueToNodeMap;
    
private:
    UPROPERTY()
    FGuid m_ConditionID;
    
public:
    UComboTransitionCondition();
    UFUNCTION(BlueprintCallable)
    static bool BPF_TestConditionOfClass(TSubclassOf<UComboTransitionCondition> _condition, const AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_TestCondition(const UComboTransitionCondition* _condition, const AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintNativeEvent)
    uint8 BPE_GetTargetNode(const AFightingCharacter* _owner, const AActor* _target) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString BPE_GetLog() const;
    
};

