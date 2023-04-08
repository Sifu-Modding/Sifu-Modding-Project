#include "LockableDoor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "SCSaveGameComponent.h"
#include "Net/UnrealNetwork.h"

class AFightingCharacter;
class UAnimationAsset;

void ALockableDoor::SetOpened(bool bOpened) {
}

void ALockableDoor::SetLocked(bool bLocked) {
}

void ALockableDoor::OnReplaySystemRecordingChanged(bool _bRecording) {
}

void ALockableDoor::OnRep_SkeletalMesh() {
}

void ALockableDoor::OnRep_HidenMeshComponents() {
}

void ALockableDoor::BPF_SetNonOccluding(bool bNonOccluding) {
}

void ALockableDoor::BPF_SetDoorInOpenedState(UAnimationAsset* _openingAnimAsset) {
}

void ALockableDoor::BPF_RemoveNavBuildLock() {
}

void ALockableDoor::BPF_OpenDoor(AFightingCharacter* _interactor, UAnimationAsset* _openingAnimAsset, UAnimationAsset* _closingAnimAsset) {
}

void ALockableDoor::BPF_CloseDoor() {
}

void ALockableDoor::BPF_AddNavBuildLock() {
}






void ALockableDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALockableDoor, m_SkeletalMesh);
    DOREPLIFETIME(ALockableDoor, m_HiddenMeshComponents);
}

ALockableDoor::ALockableDoor() {
    this->m_SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->m_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->m_fCloseDistThreshold = 500.00f;
    this->m_SaveComponent = CreateDefaultSubobject<USCSaveGameComponent>(TEXT("SaveComponent"));
    this->m_bShouldStayOpen = false;
    this->m_levelSequenceWay1 = NULL;
    this->m_levelSequenceWay2 = NULL;
    this->m_bCanLockNavBuild = true;
    this->m_SkeletalMesh = NULL;
    this->m_bLocked = false;
    this->m_bOpened = false;
}

