#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AchievementUnlockConditionClassInstance -FallbackName=AchievementUnlockConditionClassInstance
#include "ECharacterGender.h"
#include "ArenaChallengeRefillDescription.h"
#include "ArenaChallengeDescription.generated.h"

class AAIWaveRefillDirector;
class ABaseWeapon;
class APlayerStart;
class UBaseArenaObjective;
class UWorld;

UCLASS(Blueprintable)
class SIFU_API UArenaChallengeDescription : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_ArenaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APlayerStart> m_desiredPlayerStart;
    
 /*   UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementUnlockConditionClassInstance m_MasterObjective;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> m_CheatsToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FString> m_CheatsWithArgument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FString> m_CheatArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABaseWeapon> m_carriedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDeathCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eCharacterGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideOutfit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iOutfitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableOutfitPropSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> m_AIInitialSpawnSublevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArenaChallengeRefillDescription m_RefillDescription;
    
    UArenaChallengeDescription();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIWaveRefillDirector* BPF_GetRefillDirector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetNbWaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetDeathCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, FString> BPF_GetCheatsToActivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<ABaseWeapon> BPF_GetCarriedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseArenaObjective* BPF_GetArenaObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetAge() const;
    
};

