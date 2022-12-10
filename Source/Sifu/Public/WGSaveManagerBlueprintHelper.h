#pragma once
#include "CoreMinimal.h"
#include "SaveManagerBlueprintHelper.h"
#include "DuplicatedSaveData.h"
#include "WGSaveManagerBlueprintHelper.generated.h"

UCLASS()
class SIFU_API UWGSaveManagerBlueprintHelper : public USaveManagerBlueprintHelper {
    GENERATED_BODY()
public:
    UWGSaveManagerBlueprintHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_SnapshotPartOfSave(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedSaveGame(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ResetSnapshotWithMask(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ResetPartOfSave(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ResetForbiddenSaveMask();
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_PushForbiddenSaveMask(int32 _iSaveTypeBitmask, const FString& _contextString);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PushBlockWorldStateSave(const FString& _contextString);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PopForbiddenSaveMask(int32 _iHandle);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PopBlockWorldStateSave();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_OverrideSaveWithSnapshot(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_HasSnapshotOfMask(int32 _iSaveTypeBitmask);
    
    UFUNCTION(BlueprintPure)
    static void BPF_GetSnapshotSavedData(int32 _iSaveTypeBitmask, FDuplicatedSaveData& _snapshotSavedData);
    
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetForbiddenMask();
    
};

