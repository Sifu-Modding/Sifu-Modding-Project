#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CompressedPoseSnapshot.h"
#include "Templates/SubclassOf.h"
#include "SCImpostorReplicationInfos.generated.h"

class ASCCharacterImpostor;
class UAnimSequence;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSCImpostorReplicationInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASCCharacterImpostor> m_Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> m_ImpostorAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompressedPoseSnapshot m_PoseToMimic;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double m_CheckPointTimeMS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat m_qRotation;
    
    SCCORE_API FSCImpostorReplicationInfos();
};

