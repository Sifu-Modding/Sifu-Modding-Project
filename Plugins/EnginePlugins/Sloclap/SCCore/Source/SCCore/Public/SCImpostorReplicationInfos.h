#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "CompressedPoseSnapshot.h"
#include "UObject/NoExportTypes.h"
#include "SCImpostorReplicationInfos.generated.h"

class UAnimSequence;
class ASCCharacterImpostor;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSCImpostorReplicationInfos {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_bMirrorAnimation;
    
    UPROPERTY()
    TSubclassOf<ASCCharacterImpostor> m_Class;
    
    UPROPERTY()
    TSoftObjectPtr<UAnimSequence> m_ImpostorAnimation;
    
    UPROPERTY()
    TSoftObjectPtr<USkeletalMesh> m_SkeletalMesh;
    
    UPROPERTY()
    FCompressedPoseSnapshot m_PoseToMimic;
    
    UPROPERTY()
    double m_CheckPointTimeMS;
    
    UPROPERTY()
    FVector m_vLocation;
    
    UPROPERTY()
    FQuat m_qRotation;
    
    SCCORE_API FSCImpostorReplicationInfos();
};

