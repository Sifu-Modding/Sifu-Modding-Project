#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AchievementUnlockCondition -FallbackName=AchievementUnlockCondition
#include "ERunType.h"
#include "EOrderType.h"
#include "WGAchievementUnlockCondition.generated.h"

class AAISituationActor;
class UOrderComponent;
class ASpawnerGroup;

UCLASS()
class SIFU_API UWGAchievementUnlockCondition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<AAISituationActor*> m_ResolvedSituations;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bIsActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<AAISituationActor>> m_SpecificUnlockSituations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<ASpawnerGroup>> m_SituationIgnoredSpawnerGroups;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_WantedDifficulties;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iCheatsUnlockPointsToAdd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bAddCheatsUnlockPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ERunType m_eAllowedRunType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FString> m_NeededCheatsWithArguments;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bWantSpecificDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOrderType m_eMonitoredOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bMonitorOrder;
    
public:
    UWGAchievementUnlockCondition();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSituationResolved(AAISituationActor* _situation, bool _bHasActiveSituation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSituationActivated(AAISituationActor* _situation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnOrderStarted(uint8 _orderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnFirstConditionActive();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnConditionStops();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAllSituationResolved();
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetTitleAndDescription(FText& _title, FText& _description) const;
    
};

