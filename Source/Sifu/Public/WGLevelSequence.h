#pragma once
#include "CoreMinimal.h"
#include "SCLevelSequence.h"
#include "WGLevelSequence.generated.h"

class UWGLevelSequenceDirectorData;

UCLASS(Blueprintable)
class SIFU_API UWGLevelSequence : public USCLevelSequence {
    GENERATED_BODY()
public:
    UWGLevelSequence();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetCharacterPickedObjectVisibility(FName _roleName, bool _bVisible);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushInputContext();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopInputContext();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWGLevelSequenceDirectorData* BPF_GetWGData() const;
    
};

