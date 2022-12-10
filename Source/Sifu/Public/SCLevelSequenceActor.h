#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "SequenceBinding.h"
#include "SCLevelSequenceActor.generated.h"

class ACharacter;
class ULevelSequence;

UCLASS()
class SIFU_API ASCLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSequenceBinding> m_SequenceBindings;
    
  /*  ASCLevelSequenceActor();*/
    UFUNCTION(BlueprintCallable)
    void BPF_Play();
    
    UFUNCTION(BlueprintImplementableEvent)
    ULevelSequence* BPF_GetOverridingLevelSequence(ACharacter* _characterOwner) const;
    
};

