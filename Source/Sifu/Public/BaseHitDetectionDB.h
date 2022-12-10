#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseHitDetectionDB.generated.h"

class USkeletalMeshComponent;
class ABaseCharacter;

UCLASS(BlueprintType)
class SIFU_API UBaseHitDetectionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bUseBoneTransform;
    
    UPROPERTY(EditAnywhere)
    FName m_boneName;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsSocket;
    
    UPROPERTY(EditAnywhere)
    bool m_bOnTargetOnly;
    
    UPROPERTY(EditAnywhere)
    FVector m_vOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator m_RotationOffset;
    
    UBaseHitDetectionDB();
    UFUNCTION(BlueprintPure)
    FName BPF_GetRealBoneName(USkeletalMeshComponent* _meshComponent) const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetBoneOnCharacter(ABaseCharacter* _character, bool _bMirror, FTransform& _delta) const;
    
};

