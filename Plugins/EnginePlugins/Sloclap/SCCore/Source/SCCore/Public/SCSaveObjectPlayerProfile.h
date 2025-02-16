#pragma once
#include "CoreMinimal.h"
#include "CharacterSaveDescription.h"
#include "SCProfileData.h"
#include "SCSaveObject.h"
#include "SCSaveObjectPlayerProfile.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCSaveObjectPlayerProfile : public USCSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSCProfileData m_BaseProfileData;
    
    USCSaveObjectPlayerProfile();

    UFUNCTION(BlueprintCallable)
    void BPF_RemoveSave(const FString& _saveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSaveValid(const FString& _saveName, bool _bTreatBackup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterSaveDescription BPF_FindSaveByFileName(const FString& _fileName, bool& _bFound) const;
    
};

