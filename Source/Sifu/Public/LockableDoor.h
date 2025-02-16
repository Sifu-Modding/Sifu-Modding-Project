#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "LockableDoor.generated.h"

class AFightingCharacter;
class UAnimationAsset;
class ULevelSequence;
class USCSaveGameComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SIFU_API ALockableDoor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockableDoorEndClose, const AActor*, _lockableDoorActor);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_RootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCloseDistThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vHandleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCSaveGameComponent* m_SaveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShouldStayOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_levelSequenceWay1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_levelSequenceWay2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockableDoorEndClose m_OnDoorEndClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanLockNavBuild;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SkeletalMesh, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HidenMeshComponents, meta=(AllowPrivateAccess=true))
    TArray<FName> m_HiddenMeshComponents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_sequenceRoleName;
    
    ALockableDoor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetOpened(bool bOpened);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bLocked);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReplaySystemRecordingChanged(bool _bRecording);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkeletalMesh();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HidenMeshComponents();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetNonOccluding(bool bNonOccluding);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDoorInOpenedState(UAnimationAsset* _openingAnimAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveNavBuildLock();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_OpenDoor(AFightingCharacter* _interactor, UAnimationAsset* _openingAnimAsset, UAnimationAsset* _closingAnimAsset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseDoor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_AddNavBuildLock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OpenedStatusChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDoorAnimationFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_MustMirrorOpeningAnim(const AFightingCharacter* _Instigator, bool _bInteraction1) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_LockedStatusChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetOpeningDoorInfo(const AFightingCharacter* _Instigator, bool _bInteraction1, bool& _outPlayAnimOnCharacter, bool& _outMustMirrorAnimOnCharacter) const;
    
};

