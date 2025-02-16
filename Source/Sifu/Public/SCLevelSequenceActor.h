#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "SequenceBinding.h"
#include "SCLevelSequenceActor.generated.h"

class ACharacter;
class ULevelSequence;

UCLASS(Blueprintable)
class SIFU_API ASCLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSequenceBinding> m_SequenceBindings;
    
    ASCLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_Play();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ULevelSequence* BPF_GetOverridingLevelSequence(ACharacter* _characterOwner) const;
    
};

