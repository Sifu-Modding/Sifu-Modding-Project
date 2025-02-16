#pragma once
#include "CoreMinimal.h"
#include "InheritedDataAsset.h"
#include "SCLevelSequenceRoleData.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCLevelSequenceRoleData : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnchorBoneName;
    
    USCLevelSequenceRoleData();

};

