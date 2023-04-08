#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPlatform -FallbackName=EPlatform
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AchievementUnlockCondition -FallbackName=AchievementUnlockCondition
#include "EOrderType.h"
#include "ERunType.h"
#include "WGAchievementUnlockCondition.generated.h"

class AAISituationActor;
class ASpawnerGroup;
class UOrderComponent;

UCLASS(Blueprintable)
class SIFU_API UWGAchievementUnlockCondition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAISituationActor*> m_ResolvedSituations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AAISituationActor>> m_SpecificUnlockSituations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ASpawnerGroup>> m_SituationIgnoredSpawnerGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WantedDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCheatsUnlockPointsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAddCheatsUnlockPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunType m_eAllowedRunType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FString> m_NeededCheatsWithArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWantSpecificDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eMonitoredOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMonitorOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAuthorizeSpecificPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AuthorizedPlatform;
    
public:
    /*UWGAchievementUnlockCondition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPlatformAuthorized(EPlatform _ePlatform) const;*/
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSituationResolved(AAISituationActor* _situation, bool _bHasActiveSituation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSituationActivated(AAISituationActor* _situation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnOrderStarted(uint8 _orderID, UOrderComponent* _OrderComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnFirstConditionActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnConditionStops();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAllSituationResolved();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void BPE_GetTitleAndDescription(FText& _title, FText& _description) const;
    
};

