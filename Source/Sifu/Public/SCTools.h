#pragma once
#include "CoreMinimal.h"
#include "SCCoreTools.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPlatform -FallbackName=EPlatform
#include "EQuadrantTypes.h"
#include "Engine/LatentActionManager.h"
#include "SCTools.generated.h"

class UObject;
class UWorld;
class UGameInstance;

UCLASS(BlueprintType)
class SIFU_API USCTools : public USCCoreTools {
    GENERATED_BODY()
public:
    USCTools();
    UFUNCTION(BlueprintPure)
    static EQuadrantTypes GetAttackQuadrant(EQuadrantTypes _eQuadrant, bool _bIsMirror);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ModifyObject(UObject* _object);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsDesktopPlatform();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_HasEntitlement(const UObject* _worldContextObject, const FName& _entitlement);
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetMapPath(TSoftObjectPtr<UWorld> _map);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static UGameInstance* BPF_GetGameInstanceNoWarning(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UObject* BPF_GetDefaultObject(UClass* _ObjectClass);
    
  /*  UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static EPlatform BPF_GetCurrentSubsystemPlatform(const UObject* _worldContextObject);*/
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BPF_FadeWithoutWait(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void BPF_Fade(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack, FLatentActionInfo LatentInfo);
    
};

