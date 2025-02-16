#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LipSync_Phrase.h"
#include "PhrasesList.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TEXT2LIPSYNC_API UPhrasesList : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLipSync_Phrase> Data;
    
public:
    UPhrasesList();

    UFUNCTION(BlueprintCallable)
    bool LoadFromDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void GetPhraseFromList(const FName& Key, FLipSync_Phrase& ReturnValue) const;
    
};

