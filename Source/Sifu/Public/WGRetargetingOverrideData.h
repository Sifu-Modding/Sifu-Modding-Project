#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "Engine/DataAsset.h"
#include "Animation/Skeleton.h"
//#include "Animation/BoneReference.h"
#include "WGRetargetingOverrideData.generated.h"

class USkeleton;

UCLASS(Blueprintable)
class SIFU_API UWGRetargetingOverrideData : public UDataAsset  {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* m_Skeleton;
    
    //UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    //TMap<FBoneReference, TEnumAsByte<EBoneTranslationRetargetingMode::Type>> m_BoneRetargetingOverrideMap;
    
    UWGRetargetingOverrideData();


    // Fix for true pure virtual functions not being implemented
};

