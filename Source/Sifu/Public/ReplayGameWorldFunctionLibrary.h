#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/Scene.h"
#include "ReplayGameWorldFunctionLibrary.generated.h"

class AActor;
class AFightingCharacter;
class ASCCharacterImpostor;
class ASCPlayerController;
class UExponentialHeightFogComponent;
class UObject;

UCLASS(Blueprintable)
class SIFU_API UReplayGameWorldFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReplayGameWorldFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsPhotomodeActivated(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GetReplayActorUniqueID(const AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static AFightingCharacter* BPF_GetMainCharacter(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_GetFinalLevelPostProcessSettings(ASCPlayerController* _playerController, FPostProcessSettings& outPostProcessSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static UExponentialHeightFogComponent* BPF_GetExponentialHeightFog(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetApplicationDeltaTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static TArray<ASCCharacterImpostor*> BPF_GetActiveImpostors(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static TArray<AFightingCharacter*> BPF_GetActiveAIs(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static TArray<AActor*> BPF_GetActiveAIAndImpostors(const UObject* _worldContextObject);
    
};

