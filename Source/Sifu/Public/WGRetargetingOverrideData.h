#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "Animation/Skeleton.h"
#include "BoneContainer.h"
#include "WGRetargetingOverrideData.generated.h"

class USkeleton;

UCLASS()
class SIFU_API UWGRetargetingOverrideData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    USkeleton* m_Skeleton;
    
  /*  UPROPERTY(EditAnywhere)
    TMap<FBoneReference, TEnumAsByte<EBoneTranslationRetargetingMode::Type>> m_BoneRetargetingOverrideMap;*/
    
    UWGRetargetingOverrideData();
    
    // Fix for true pure virtual functions not being implemented
};

