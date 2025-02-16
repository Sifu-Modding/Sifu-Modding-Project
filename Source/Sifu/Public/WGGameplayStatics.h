#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGameDifficulty.h"
#include "WGGameplayStatics.generated.h"

class ACharacter;
class UObject;

UCLASS(Blueprintable)
class SIFU_API UWGGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWGGameplayStatics();

    UFUNCTION(BlueprintCallable)
    static FName BPF_StartConversation(ACharacter* _character, FName _startingSegment, const bool _bGenericSubtitles, ACharacter* _secondary, bool _bCutOtherDialogs, bool _bLookAtEnabled, bool _bIgnoreCharacterCanSpeak);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetGameDifficulty(EGameDifficulty _eDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static bool BPF_IsGameOver(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static bool BPF_IsChallengeGameMode(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGameDifficulty BPF_GetGameDifficultyInSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGameDifficulty BPF_GetGameDifficulty(bool _bNeedSaveGame);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_CutDialog();
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_CorsairSetState(const FString& _event);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_CorsairSetGame(const FString& _gameName);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_CorsairSetEvent(const FString& _event);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_CorsairRequestControl();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_CorsairPerformProtocolHandshake();
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_CorsairClearState(const FString& _event);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_CorsairClearAllStates();
    
};

