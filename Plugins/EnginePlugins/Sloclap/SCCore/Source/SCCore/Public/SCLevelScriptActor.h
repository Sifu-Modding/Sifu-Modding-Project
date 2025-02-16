#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "SCLevelScriptActor.generated.h"

class ALevelSequenceActor;
class UDataTable;

UCLASS(Blueprintable)
class SCCORE_API ASCLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bContainsSaveData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ContextualDialogLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_WorldConversationSegments;
    
public:
    ASCLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUpdatedFromSave();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnLevelSequenceSkipped(ALevelSequenceActor* _levelSequenceActor);
    
};

