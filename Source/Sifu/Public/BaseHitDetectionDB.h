#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "BaseHitDetectionDB.generated.h"

class ABaseCharacter;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SIFU_API UBaseHitDetectionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseBoneTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_boneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnTargetOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_RotationOffset;
    
    UBaseHitDetectionDB();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetRealBoneName(USkeletalMeshComponent* _meshComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetBoneOnCharacter(ABaseCharacter* _character, bool _bMirror, FTransform& _delta) const;
    
};

