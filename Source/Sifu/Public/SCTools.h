#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPlatform -FallbackName=EPlatform
#include "Engine/LatentActionManager.h"
#include "GameplayTagContainer.h"
#include "SCCoreTools.h"
#include "EQuadrantTypes.h"
#include "SCTools.generated.h"

class UGameInstance;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class SIFU_API USCTools : public USCCoreTools {
    GENERATED_BODY()
public:
    USCTools();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EQuadrantTypes GetAttackQuadrant(EQuadrantTypes _eQuadrant, bool _bIsMirror);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ModifyObject(UObject* _object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsDesktopPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_HasEntitlement(const UObject* _worldContextObject, const FName& _entitlement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GetMapPath(TSoftObjectPtr<UWorld> _map);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag BPF_GetGameplayTagFromName(const FName& _tagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static UGameInstance* BPF_GetGameInstanceNoWarning(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* BPF_GetDefaultObject(UClass* _ObjectClass);
    
  /*  UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static EPlatform BPF_GetCurrentSubsystemPlatform(const UObject* _worldContextObject);*/
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BPF_FadeWithoutWait(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void BPF_Fade(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack, FLatentActionInfo LatentInfo);
    
};

