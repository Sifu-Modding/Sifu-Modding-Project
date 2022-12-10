#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComboNode.h"
#include "SCUserDefinedEnumHandler.h"
#include "ComboStartNode.h"
#include "Combo.generated.h"

class UAttackDB;

UCLASS(BlueprintType)
class SIFU_API UCombo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_DefaultStartState;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FComboNode> m_Nodes;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, UAttackDB*> m_Attacks;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FComboStartNode> m_ComboStartNodesContainer;
    
    UPROPERTY()
    FSCUserDefinedEnumHandler m_StartStatesEnum;
    
    UPROPERTY(VisibleAnywhere)
    int32 m_DefaultAttacks[21];
    
    UCombo();
    UFUNCTION(BlueprintPure)
    FComboNode BPF_GetNode(int32 _ID) const;
    
};

