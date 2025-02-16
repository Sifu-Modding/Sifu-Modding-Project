#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetTextLibrary.h"
#include "ECharacterGender.h"
#include "SCDebugNamedOject.h"
#include "SCPoolableActor.h"
#include "Templates/SubclassOf.h"
#include "SCCharacter.generated.h"

class AActor;
class ASCCharacterImpostor;
class UAnimSequence;
class USCCharacterPoseData;
class USkeletalMesh;

UCLASS(Blueprintable)
class SCCORE_API ASCCharacter : public ACharacter, public ISCPoolableActor, public ISCDebugNamedOject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FImpostorDelegate, ASCCharacterImpostor*, ImpostorActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpostorDelegate OnSpawnedImpostorDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpostorDelegate OnImpostorActivated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ImpostorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanUnspawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanSpawnImpostor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsPooled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PooledActorActive, meta=(AllowPrivateAccess=true))
    bool m_bPooledActorActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bPooledActorActiveForReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USCCharacterPoseData> m_PoseDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDontCreateClotOnLowerEndPlatforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetGender, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eGender;
    
public:
    ASCCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetGender(ECharacterGender _eGender);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetGender();
    
protected:
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInCinematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_InputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETextGender BPF_GetTextGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetImpostorName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterGender BPF_GetGender() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceCanSpawnImpostor(bool _bCanSpawnImpostor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddObjectToKeepAttachedOnImpostor(AActor* _actor, EAttachmentRule _eAttachmentRules, FName _boneName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetGender(ECharacterGender _eGender);
    

    // Fix for true pure virtual functions not being implemented
};

