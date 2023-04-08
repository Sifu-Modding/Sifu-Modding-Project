#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=CheatData -FallbackName=CheatData
#include "GravityCheatData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UGravityCheatData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsGravityEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWantedGravityScale;
    
public:
    UGravityCheatData();
};

