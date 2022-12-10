#pragma once
#include "CoreMinimal.h"
#include "SCAnimInstance.h"
#include "Animation/PoseSnapshot.h"
#include "CompressedPoseSnapshot.h"
#include "SCCharacterImpostorAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class SCCORE_API USCCharacterImpostorAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool m_bHasAnimation;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    UAnimSequence* m_animation;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool m_bMirrorAnimation;
    
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FPoseSnapshot m_PoseSnapshotToMimic;
    
    UPROPERTY(ReplicatedUsing=OnRep_CompressedPoseSnapshotToMimic)
    FCompressedPoseSnapshot m_CompressedPoseSnapshotToMimic;
    
public:
    USCCharacterImpostorAnimInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_CompressedPoseSnapshotToMimic();
    
};

