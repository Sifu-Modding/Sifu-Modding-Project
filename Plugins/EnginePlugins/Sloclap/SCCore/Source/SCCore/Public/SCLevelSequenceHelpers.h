#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCLevelSequenceDynamicDelegateDelegate.h"
#include "SCSequenceParameters.h"
#include "SCLevelSequenceHelpers.generated.h"

class APlayerController;
class ACharacter;
class ALevelSequenceActor;
class AActor;

UCLASS(BlueprintType)
class SCCORE_API USCLevelSequenceHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCLevelSequenceHelpers();
    UFUNCTION(BlueprintCallable)
    static void BPF_UnbindOnSequenceViewBlendStateChanged(const FSCLevelSequenceDynamicDelegate& _delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_StopSequence(const ALevelSequenceActor* _sequenceActor);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetSequenceCharacter(const ALevelSequenceActor* _sequenceActor, ACharacter* _character);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_RegisterSequenceActor(const ALevelSequenceActor* _sequenceActor, AActor* _actor, FName _roleName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PlaySequence(const ALevelSequenceActor* _sequenceActor, ACharacter* _characterOwner, bool _bLoop);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PauseSequence(const ALevelSequenceActor* _sequenceActor);
    
    UFUNCTION(BlueprintPure)
    static FName BPF_GetTeleportRoleName();
    
    UFUNCTION(BlueprintCallable)
    static ALevelSequenceActor* BPF_GetSequenceActorFromId(int32 _sequenceID);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_CreateSequence(ACharacter* _characterOwner, APlayerController* _controller, const FSCSequenceParameters& _parameters);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BindOnSequenceViewBlendStateChanged(const FSCLevelSequenceDynamicDelegate& _delegate);
    
};

