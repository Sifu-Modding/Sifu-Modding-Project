#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCUserDefinedEnumHandler.h"
#include "ComboNode.h"
#include "ComboStartNode.h"
#include "Combo.generated.h"

class UAttackDB;

UCLASS(Blueprintable)
class SIFU_API UCombo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_DefaultStartState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComboNode> m_Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAttackDB*> m_Attacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComboStartNode> m_ComboStartNodesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_StartStatesEnum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DefaultAttacks[21];
    
    UCombo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FComboNode BPF_GetNode(int32 _ID) const;
    
};

