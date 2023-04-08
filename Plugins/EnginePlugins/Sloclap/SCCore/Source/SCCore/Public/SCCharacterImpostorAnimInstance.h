#pragma once
#include "CoreMinimal.h"
#include "Animation/PoseSnapshot.h"
#include "CompressedPoseSnapshot.h"
#include "SCAnimInstance.h"
#include "SCCharacterImpostorAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class SCCORE_API USCCharacterImpostorAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bHasAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bMirrorAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot m_PoseSnapshotToMimic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CompressedPoseSnapshotToMimic, meta=(AllowPrivateAccess=true))
    FCompressedPoseSnapshot m_CompressedPoseSnapshotToMimic;
    
public:
    USCCharacterImpostorAnimInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CompressedPoseSnapshotToMimic();
    
};

