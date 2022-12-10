#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReplayGameWorldFunctionLibrary.generated.h"

class AFightingCharacter;
class UObject;
class AActor;
class UExponentialHeightFogComponent;
class ASCPlayerController;
class ASCCharacterImpostor;

UCLASS(BlueprintType)
class SIFU_API UReplayGameWorldFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReplayGameWorldFunctionLibrary();
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsPhotomodeActivated(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetReplayActorUniqueID(const AActor* _actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static AFightingCharacter* BPF_GetMainCharacter(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_GetFinalLevelPostProcessSettings(ASCPlayerController* _playerController, FPostProcessSettings& outPostProcessSettings);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static UExponentialHeightFogComponent* BPF_GetExponentialHeightFog(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetApplicationDeltaTime();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static TArray<ASCCharacterImpostor*> BPF_GetActiveImpostors(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static TArray<AFightingCharacter*> BPF_GetActiveAIs(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static TArray<AActor*> BPF_GetActiveAIAndImpostors(const UObject* _worldContextObject);
    
};

