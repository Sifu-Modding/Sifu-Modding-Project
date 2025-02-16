#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkillFilter.h"
#include "SkillTreeNode.h"
#include "SkillsChilds.generated.h"

class USCAbilitySystemComponent;
class USkillsChilds;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USkillsChilds : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FEnumerateChildsDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillTreeNode> m_Skills;
    
    USkillsChilds();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetParent(const FSkillTreeNode& _node, FSkillTreeNode& _parent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_FindSkillBySocket(FName _socketName, FSkillTreeNode& _node) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_FindChilds(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, TArray<FSkillTreeNode>& _result, const USkillsChilds* _rootToEnumerateVirtualChilds, bool _bStopOnFilterFailed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_FindChild(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, FSkillTreeNode& _result, const USkillsChilds* _rootToEnumerateVirtualChilds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_EnumerateChilds(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, USkillsChilds::FEnumerateChildsDelegate _enumerator, const USkillsChilds* _rootToEnumerateVirtualChilds, bool _bStopOnFilterFailed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_CountChilds(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, bool _bStopOnFilterFailed) const;
    
};

