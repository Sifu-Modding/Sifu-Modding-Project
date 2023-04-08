#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveManagerBlueprintHelper.generated.h"

class USCSaveObjectGameData;
class USCSaveObjectPlayerProfile;
class USaveManagerDelegateHandler;

UCLASS(Blueprintable)
class SCCORE_API USaveManagerBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveManagerBlueprintHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_WriteSaveGameToDisk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_SwapSaveNameToAndFromBackup(const FString& _currentSaveName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetSaveSystemEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedLoadFirstSave();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedLoad(const FString& _saveName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedCreateSaveGame(int32 _iSaveIndex, bool _bWriteToDisk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsUsingDebugSaveLevelInPIE();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsUsingDebugGameFlowInPie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsSaveSystemEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan BPF_GetTimePlayedInCurrentSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USaveManagerDelegateHandler* BPF_GetSaveManagerDelegateHandler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GetSaveBackupSuffix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetPlayerSavesCount(bool _bValidOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USCSaveObjectPlayerProfile* BPF_GetCurrentSaveProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USCSaveObjectGameData* BPF_GetCurrentSaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GenerateSaveNameFromIndex(int32 _iIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GenerateIndexFromSaveName(const FString& _saveName);
    
};

