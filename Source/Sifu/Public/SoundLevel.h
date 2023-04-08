#pragma once
#include "CoreMinimal.h"
#include "EGlobalBehaviors.h"
#include "SoundMoodState.h"
#include "ThePlainesLevel.h"
#include "SoundLevel.generated.h"

class ABaseCharacter;

UCLASS(Blueprintable)
class SIFU_API ASoundLevel : public AThePlainesLevel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_SoundManagerSaveData;
    
public:
    ASoundLevel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMoodChanged(FSoundMoodState _previousState, FSoundMoodState _newState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAIGlobalBehaviorChanged(const ABaseCharacter* _AICharacter, EGlobalBehaviors _ePreviousBehavior, EGlobalBehaviors _eNewBehavior);
    
};

