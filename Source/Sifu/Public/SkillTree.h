#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDynamicDelegate__DelegateSignature -FallbackName=SCDynamicDelegateDelegate
#include "SkillTree.generated.h"

class USkillsDB;
class USkillGameplayEffect;
class UCurveFloat;

UCLASS()
class SIFU_API ASkillTree : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkillsDB* m_SkillsDB;
    
   /* ASkillTree();
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateTreeOverTime(const TArray<TSubclassOf<USkillGameplayEffect>>& _prevUnlockedSkills, const TArray<TSubclassOf<USkillGameplayEffect>>& _newUnlockedSkills, float _fDuration, UCurveFloat* _floatCurve, FSCDynamicDelegate _onFinished);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTreeState(const TArray<TSubclassOf<USkillGameplayEffect>>& _unlockedSkills);
    
    UFUNCTION(BlueprintCallable)
    void BPF_BlendTreeState(const TArray<TSubclassOf<USkillGameplayEffect>>& _prevSkills, const TArray<TSubclassOf<USkillGameplayEffect>>& _newSkills, float _fAlpha);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SetNodeState(FName _boneName, float _fState, float _fAge);*/
    
};

