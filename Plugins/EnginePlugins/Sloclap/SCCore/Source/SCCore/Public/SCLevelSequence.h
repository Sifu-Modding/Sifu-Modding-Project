#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceDirector.h"
#include "ESCSequenceBlendViewState.h"
#include "ESequenceBindingType.h"
#include "SCLevelSequence.generated.h"

class AActor;
class ACameraActor;
class ACharacter;
class ALevelSequenceActor;
class APlayerController;
class ASCSequenceAnchor;
class UAnimMontage;
class UAnimSequence;
class ULevelSequence;
class UMaterialParameterCollection;
class USCLevelSequenceDirectorData;

UCLASS(Blueprintable)
class SCCORE_API USCLevelSequence : public ULevelSequenceDirector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCLevelSequenceDirectorData* m_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* m_ActorCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASCSequenceAnchor* m_ActorAnchor;
    
public:
    USCLevelSequence();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPreStop();
    
    UFUNCTION(BlueprintCallable)
    void OnPlay();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPause();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnAnyCharacterPlayMontage(UAnimMontage* _playedMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnregisterCharacter(FName _roleName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_TeleportToActor(const AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_TeleportTo(const FVector& _location, const FRotator& _rotation, bool _bAddLocation);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveMaterialParameterBinding(int32 _iHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* BPF_PlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESCSequenceBlendViewState BPF_GetViewBlendState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetRoleFromActor(AActor* _actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USCLevelSequenceDirectorData* BPF_GetData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* BPF_GetCharacterOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACameraActor* BPF_GetCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimSequence* BPF_GetAnimSequenceFromLevelSequence(const ULevelSequence* _levelSequence, FName _roleName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASCSequenceAnchor* BPF_GetAnchor();
    
protected:
    UFUNCTION(BlueprintCallable)
    AActor* BPF_GetActorFromRole(FName _roleName);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_BlendToSequenceView(float _fTime);
    
    UFUNCTION(BlueprintCallable)
    void BPF_BlendToPlayerView(float _fTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 BPF_AddMaterialParameterBinding(UMaterialParameterCollection* _collection, FName _parameterName, ESequenceBindingType _eBinding);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_OnRegisterActor(AActor* _actor, FName _role, ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCreated(ALevelSequenceActor* _sequenceActor, ACharacter* _playerCharacter, ACameraActor* _camera);
    
};

