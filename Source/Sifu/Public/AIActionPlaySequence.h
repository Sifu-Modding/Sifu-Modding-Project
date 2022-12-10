#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "Engine/EngineTypes.h"
#include "AIActionPlaySequence.generated.h"

class ALevelSequenceActor;
class AActor;

UCLASS()
class SIFU_API UAIActionPlaySequence : public UWGAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ALevelSequenceActor> m_LevelSequenceActor;
    
private:
    UPROPERTY()
    ALevelSequenceActor* m_CreatedLevelSequenceActor;
    
public:
    UAIActionPlaySequence();
private:
    UFUNCTION()
    void OnCreatedSequenceActorEndedPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
};

