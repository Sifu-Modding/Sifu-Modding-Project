#pragma once
#include "CoreMinimal.h"
#include "SCLevelSequenceRole.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCLevelSequenceRole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnchorJoint;
    
    FSCLevelSequenceRole();
};

