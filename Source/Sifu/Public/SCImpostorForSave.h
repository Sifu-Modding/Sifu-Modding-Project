#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterGender.h"
#include "SCImpostorForSave.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSCImpostorForSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_PoolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_ImpostorSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTransform m_Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_StreamLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_VoiceArchetypeSwitchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_VoiceVariationSwitchValue;
    
    SIFU_API FSCImpostorForSave();
};

