#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "Templates/SubclassOf.h"
#include "DebugMenu.generated.h"

class UCharacterBuildDB;
class UCharacterBuildListDB;
class ULoadSlot;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UDebugMenu : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_CharacterBuildPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterBuildDB* m_DummyCharcterBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterBuildListDB* m_CharacterBuildList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULoadSlot> m_LoadingButtonClass;
    
public:
    UDebugMenu();

    UFUNCTION(BlueprintCallable)
    void BPF_ShowSaves(UPanelWidget* _boxToFill);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetVBoxInvisible();
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadEquipmentSelection();
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadBackup(const FString& _backupName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadAndSetFirstSave(ULoadSlot* _loadSlot);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DeleteBackup(const FString& _backupName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateNewSave(const FString& _charaName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateBackup(const FString& _backupName);
    
};

