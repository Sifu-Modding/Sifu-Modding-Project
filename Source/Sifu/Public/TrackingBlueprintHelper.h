#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "TrackingBlueprintHelper.generated.h"

UCLASS(Blueprintable)
class SIFU_API UTrackingBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTrackingBlueprintHelper();

    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEventTU4Launched();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEventCustomChallengeStarted();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEventChallengeStart(const FText _sChallengeName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEventChallengeEnd(const FText _sChallengeName, const int32 _iHighScore, const uint8 _uiNumberStars);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEventAccessedArenaFirstTimeAfterBeatingYang();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEventAccessedArena();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_UnlockAllSkillsPermanently(int64 _iTimePlayed);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_OutfitUnlocked(const FGameplayTag& _outfitTag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_ModifierUnlocked(const FGameplayTag& _tag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_HideoutStarted(const FString& _mapName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_HideoutCompleted(const FString& _mapName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_GoalUnlocked(const FGameplayTag& _goalTag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_GoalsAvailable();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_Ending(bool _bIsWudeEnding);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_OpenTrackingContext_GeographicalLocation(const FString& _text);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_OpenTrackingContext_AISituation(const FString& _text);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_CloseTrackingContext(const FString& _GuidString);
    
};

