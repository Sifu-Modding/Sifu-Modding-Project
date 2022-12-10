#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "LockableDoor.generated.h"

class USkeletalMeshComponent;
class USceneComponent;
class ULevelSequence;
class USCSaveGameComponent;
class UAnimationAsset;
class USkeletalMesh;
class AFightingCharacter;

UCLASS()
class SIFU_API ALockableDoor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockableDoorEndClose, const AActor*, _lockableDoorActor);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* m_SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* m_RootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCloseDistThreshold;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_vHandleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USCSaveGameComponent* m_SaveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bShouldStayOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* m_levelSequenceWay1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* m_levelSequenceWay2;
    
    UPROPERTY(BlueprintAssignable)
    FLockableDoorEndClose m_OnDoorEndClose;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanLockNavBuild;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SkeletalMesh)
    USkeletalMesh* m_SkeletalMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool m_bLocked;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool m_bOpened;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FName m_sequenceRoleName;
    
    ALockableDoor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetOpened(bool bOpened);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bLocked);
    
private:
    UFUNCTION()
    void OnReplaySystemRecordingChanged(bool _bRecording);
    
    UFUNCTION()
    void OnRep_SkeletalMesh();
    
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OpenedStatusChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDoorAnimationFinished();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_MustMirrorOpeningAnim(const AFightingCharacter* _Instigator, bool _bInteraction1) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_LockedStatusChanged();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetOpeningDoorInfo(const AFightingCharacter* _Instigator, bool _bInteraction1, bool& _outPlayAnimOnCharacter, bool& _outMustMirrorAnimOnCharacter) const;
    
};

