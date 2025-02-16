#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "EProjectionComputeBehavior.h"
#include "ESCLevelStreamingState.h"
#include "SCGameplayStatics.generated.h"

class AActor;
class APawn;
class APlayerCameraManager;
class APlayerController;
class UObject;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class SCCORE_API USCGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCGameplayStatics();

    UFUNCTION(BlueprintCallable)
    static void BPF_UnloadLevels(const UObject* _context, const TArray<FName>& _levels, bool _bSynchronous);
    
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* BPF_SpawnEmitterAttachedFromPool(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName PoolType, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bReplicates);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UParticleSystemComponent* BPF_SpawnEmitterAtLocationFromPool(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FName PoolType, FVector Location, FRotator Rotation, FVector Scale, bool bReplicates);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetLevelsForcedDesiredState(const UObject* _context, const TArray<FName>& _levels, ESCLevelStreamingState _eDesiredState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_SetGamePaused(const UObject* _worldContextObject, bool _bPaused);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetCurrentPrimitiveDataAsDefault(UPrimitiveComponent* _primitiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_ProjectWorldToScreenWithTransform(APlayerController* _player, const FVector& _vWorldPosition, FVector2D& _vOutScreenPosition, FTransform _cameraTransform, bool _bPlayerViewportRelative, EProjectionComputeBehavior _eComputeBehavior);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_ProjectScreenToWorldWithTransform(APlayerController* _player, const FVector2D& _vInScreenPosition, FVector& _vOutWorldPosition, FVector& _vOutWorldDir, FTransform _cameraTransform);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_LoadLevels(const UObject* _context, const TArray<FName>& _levels, bool _bSynchronous, bool _bMakeVisibleAfterLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsPlaySessionPaused();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsGamePaused(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsBuildTest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsBuildShipping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* BPF_GetViewTarget(APlayerCameraManager* _cameraManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static APawn* BPF_GetFirstLocalPlayerPawn(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetBlendTimeToGo(APlayerCameraManager* _cameraManager);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ForceRefresh(AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_DisplayErrorMessage(FName _title, const FString& _message);
    
};

