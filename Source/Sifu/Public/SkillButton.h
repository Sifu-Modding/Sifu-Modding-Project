#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "SkillTreeNode.h"
#include "Templates/SubclassOf.h"
#include "SkillButton.generated.h"

class ASkillTree;
class USkillButton;
class USkillGameplayEffect;
class USkillsDB;

UCLASS(Blueprintable, EditInlineNew)
class USkillButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUdateParallax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkillButton*> m_ChildButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkillGameplayEffect> m_GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkillsDB* m_DB;
    
    USkillButton();
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateButtonLocation(ASkillTree* SkillTree);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSkillTreeNode(const FSkillTreeNode& _node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetSkillTreeNode(FSkillTreeNode& _node);
    
};

