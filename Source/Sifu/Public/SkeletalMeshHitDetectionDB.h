#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "BaseHitDetectionDB.h"
#include "BoneHitDBInfo.h"
#include "SkeletalMeshHitDetectionDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API USkeletalMeshHitDetectionDB : public UBaseHitDetectionDB {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneHitDBInfo> m_bonesToWatch;
    
public:
    USkeletalMeshHitDetectionDB();


    // Fix for true pure virtual functions not being implemented
};

