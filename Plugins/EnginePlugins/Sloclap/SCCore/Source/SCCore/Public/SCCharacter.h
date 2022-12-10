#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "SCPoolableActor.h"
#include "SCDebugNamedOject.h"
#include "ECharacterGender.h"
#include "Kismet/KismetTextLibrary.h"
#include "Engine/EngineTypes.h"
#include "SCCharacter.generated.h"

class UAnimSequence;
class ASCCharacterImpostor;
class USCCharacterPoseData;
class USkeletalMesh;
class AActor;

UCLASS()
class SCCORE_API ASCCharacter : public ACharacter, public ISCPoolableActor, public ISCDebugNamedOject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FImpostorDelegate, ASCCharacterImpostor*, ImpostorActor);
    
    UPROPERTY(BlueprintAssignable)
    FImpostorDelegate OnSpawnedImpostorDynamic;
    
private:
    UPROPERTY(VisibleAnywhere)
    FName m_ImpostorName;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCanUnspawn;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCanSpawnImpostor;
    
    UPROPERTY(VisibleInstanceOnly)
    bool m_bIsPooled;
    
    UPROPERTY(ReplicatedUsing=OnRep_PooledActorActive)
    bool m_bPooledActorActive;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USCCharacterPoseData> m_PoseDataClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDontCreateClotOnLowerEndPlatforms;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_SetGender)
    ECharacterGender m_eGender;
    
public:
    ASCCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetGender(ECharacterGender _eGender);
    
    UFUNCTION()
    void OnRep_SetGender();
    
protected:
    UFUNCTION()
    void OnRep_PooledActorActive();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_Unspawn(UAnimSequence* _animation, bool _bMirror, bool _bInstantUnspawn);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMesh(USkeletalMesh* _newMesh, bool _bSwapOnlyRendering);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGender(ECharacterGender _eGender);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCollisionEnabled(bool _bEnabled, bool _bKeepStaticMeshCollisions);
    
    UFUNCTION(BlueprintPure)
    ETextGender BPF_GetTextGender() const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetImpostorName() const;
    
    UFUNCTION(BlueprintPure)
    ECharacterGender BPF_GetGender() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddObjectToKeepAttachedOnImpostor(AActor* _actor, EAttachmentRule _eAttachmentRules, FName _boneName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SetGender(ECharacterGender _eGender);
    
    
    // Fix for true pure virtual functions not being implemented
};

