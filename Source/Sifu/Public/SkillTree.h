#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDynamicDelegate__DelegateSignature -FallbackName=SCDynamicDelegateDelegate
#include "Templates/SubclassOf.h"
#include "SkillTree.generated.h"

class UCurveFloat;
class USkillGameplayEffect;
class USkillsDB;

UCLASS(Blueprintable)
class SIFU_API ASkillTree : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkillsDB* m_SkillsDB;
    
    ASkillTree();
    /*UFUNCTION(BlueprintCallable)
    void BPF_UpdateTreeOverTime(const TArray<TSubclassOf<USkillGameplayEffect>>& _prevUnlockedSkills, const TArray<TSubclassOf<USkillGameplayEffect>>& _newUnlockedSkills, float _fDuration, UCurveFloat* _floatCurve, FSCDynamicDelegate _onFinished);
    */
    UFUNCTION(BlueprintCallable)
    void BPF_SetTreeState(const TArray<TSubclassOf<USkillGameplayEffect>>& _unlockedSkills);
    
    UFUNCTION(BlueprintCallable)
    void BPF_BlendTreeState(const TArray<TSubclassOf<USkillGameplayEffect>>& _prevSkills, const TArray<TSubclassOf<USkillGameplayEffect>>& _newSkills, float _fAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetNodeState(FName _boneName, float _fState, float _fAge);
    
};

